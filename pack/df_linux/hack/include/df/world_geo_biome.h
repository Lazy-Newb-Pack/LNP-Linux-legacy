/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORLD_GEO_BIOME_H
#define DF_WORLD_GEO_BIOME_H
namespace df {
  struct world_geo_layer;
  struct DFHACK_EXPORT world_geo_biome {
    int16_t unk1;
    int16_t index;
    std::vector<df::world_geo_layer* > layers;
    static struct_identity _identity;
    static std::vector<world_geo_biome*> &get_vector();
    static world_geo_biome *find(int id);
  public:
    world_geo_biome();
  };
}
#endif
