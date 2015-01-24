/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_TEXTVIEWERST_H
#define DF_VIEWSCREEN_TEXTVIEWERST_H
#ifndef DF_MEETING_CONTEXT_H
#include "meeting_context.h"
#endif
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen_textviewerst : viewscreen {
    std::string title;
    std::string title_colors;
    std::vector<std::string* > src_text;
    std::string outvar_type;
    std::string outvar_name;
    df::meeting_context meeting_context;
    std::string help_filename; /*!< relative to data/help */
    std::string page_filename; /*!< relative to root */
    struct DFHACK_EXPORT T_formatted_text {
      char* text;
      char* format;
      union T_flags {
        uint16_t whole;
        struct {
          uint16_t hyperlink : 1;
          uint16_t no_newline : 1;
        } bits;
        enum Shift {
          shift_hyperlink = 0,
          shift_no_newline = 1
        };
        enum Mask : uint16_t {
          mask_hyperlink = 0x1U,
          mask_no_newline = 0x2U
        };
        T_flags(uint16_t whole_ = 0) : whole(whole_) {};
      };
      T_flags flags;
      int32_t pause_depth;
      int32_t return_val;
      int32_t indent;
      static struct_identity _identity;
    public:
      T_formatted_text();
    };
    std::vector<T_formatted_text* > formatted_text;
    std::vector<char* > hyperlinks; /*!< link targets, same length as text_display */
    int8_t logged_error;
    int32_t scroll_pos; /*!< vertical scrollbar position */
    int32_t cursor_line; /*!< on hyperlink lines */
    int32_t pause_depth;
    static virtual_identity _identity;
  protected:
    viewscreen_textviewerst(virtual_identity *_id = &viewscreen_textviewerst::_identity);
    friend void *df::allocator_fn<viewscreen_textviewerst>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT bitfield_traits<viewscreen_textviewerst::T_formatted_text::T_flags> {
    typedef uint16_t base_type;
    typedef viewscreen_textviewerst::T_formatted_text::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<viewscreen_textviewerst::T_formatted_text::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
