#ifndef GD_STRING_STORE_HEADER
#define GD_STRING_STORE_HEADER

#include "Lua-CPPAPI/Src/string_store.h"

#include "godot_cpp/variant/string.hpp"


class gd_string_store: public I_string_store{
  public:
    godot::String data;

    void append(const char* data) override;
    void append(const char* data, std::size_t length) override;
};

#endif