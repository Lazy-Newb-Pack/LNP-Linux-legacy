using System.Collections.Generic;
using System.Data;
using System.Data.SQLite;
using System.Drawing;
using System.Drawing.Imaging;
using System.IO;

namespace DFWV
{
    internal static class Database
    {
        private static SQLiteConnection _connection;
        private static SQLiteCommand _command;
        private static SQLiteDataReader Reader;

        public static void SetConnection(string dbPath)
        {
            _connection = new SQLiteConnection
                ("Data Source=" + dbPath + ";Version=3;New=False;Compress=True;");
            _connection.Open();
        }

        public static void CloseConnection()
        {
            _connection.Close();
            _connection.Dispose();
        }

        private static void ExecuteNonQuery(string txtQuery)
        {
            _command = _connection.CreateCommand();
            _command.CommandText = txtQuery;
            _command.ExecuteNonQuery();
        }

        private static void ExecuteQuery(string txtQuery)
        {
            _command = _connection.CreateCommand();
            _command.CommandText = txtQuery;
            Reader = _command.ExecuteReader();
        }

        public static void BeginTransaction()
        {
            ExecuteNonQuery("BEGIN");
        }

        public static void CommitTransaction()
        {
            ExecuteNonQuery("COMMIT");
        }

        public static void EmptyAllTables()
        {
            ExecuteQuery("Select tbl_name from sqlite_master");
            var dt = new DataTable();
            dt.Load(Reader);

            foreach (DataRow row in dt.Rows)
            {
                _command = _connection.CreateCommand();
                _command.CommandText = "DELETE FROM [" + row["tbl_name"] + "]";
                _command.ExecuteNonQuery();
            }
        }

/*
        public static Bitmap BlobToImage(object blob)
        {
            MemoryStream mStream = new MemoryStream();
            byte[] pData = (byte[])blob;
            mStream.Write(pData, 0, Convert.ToInt32(pData.Length));
            Bitmap bm = new Bitmap(mStream, false);
            mStream.Dispose();
            return bm;
        }
*/

        public static byte[] ImageToBlob(Image image)
        {
            var ms = new MemoryStream();
            image.Save(ms, ImageFormat.Png);
            return ms.ToArray();
        }

        internal static void ExportWorldItem(string table, List<object> vals)
        {
            _command = _connection.CreateCommand();

            _command.CommandText = "INSERT INTO [" + table + "] values (";
            for (int i = 0; i < vals.Count; i++)
            {
                _command.CommandText += " @" + i + ",";
                _command.Parameters.AddWithValue("@" + i, vals[i]);
            }
            _command.CommandText = _command.CommandText.TrimEnd(',') + ")";


            _command.ExecuteNonQuery();
        }
    }
}