
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_xml_sax_ext_Attributes2Impl__
#define __org_xml_sax_ext_Attributes2Impl__

#pragma interface

#include <org/xml/sax/helpers/AttributesImpl.h>
#include <gcj/array.h>

extern "Java"
{
  namespace org
  {
    namespace xml
    {
      namespace sax
      {
          class Attributes;
        namespace ext
        {
            class Attributes2Impl;
        }
      }
    }
  }
}

class org::xml::sax::ext::Attributes2Impl : public ::org::xml::sax::helpers::AttributesImpl
{

public:
  Attributes2Impl();
  Attributes2Impl(::org::xml::sax::Attributes *);
  virtual jboolean isDeclared(jint);
  virtual jboolean isDeclared(::java::lang::String *, ::java::lang::String *);
  virtual jboolean isDeclared(::java::lang::String *);
  virtual jboolean isSpecified(jint);
  virtual jboolean isSpecified(::java::lang::String *, ::java::lang::String *);
  virtual jboolean isSpecified(::java::lang::String *);
  virtual void setAttributes(::org::xml::sax::Attributes *);
  virtual void addAttribute(::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  virtual void removeAttribute(jint);
  virtual void setDeclared(jint, jboolean);
  virtual void setSpecified(jint, jboolean);
private:
  JArray< jboolean > * __attribute__((aligned(__alignof__( ::org::xml::sax::helpers::AttributesImpl)))) declared;
  JArray< jboolean > * specified;
public:
  static ::java::lang::Class class$;
};

#endif // __org_xml_sax_ext_Attributes2Impl__
