
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_peer_gtk_GtkClipboard__
#define __gnu_java_awt_peer_gtk_GtkClipboard__

#pragma interface

#include <java/awt/datatransfer/Clipboard.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace peer
        {
          namespace gtk
          {
              class GtkClipboard;
              class GtkImage;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
      namespace datatransfer
      {
          class ClipboardOwner;
          class Transferable;
      }
    }
  }
}

class gnu::java::awt::peer::gtk::GtkClipboard : public ::java::awt::datatransfer::Clipboard
{

  GtkClipboard(::java::lang::String *);
public: // actually package-private
  static ::gnu::java::awt::peer::gtk::GtkClipboard * getClipboardInstance();
  static ::gnu::java::awt::peer::gtk::GtkClipboard * getSelectionInstance();
private:
  void setSystemContents(jboolean);
public:
  virtual void setContents(::java::awt::datatransfer::Transferable *, ::java::awt::datatransfer::ClipboardOwner *);
private:
  void advertiseContent(JArray< ::java::lang::String * > *, jboolean, jboolean, jboolean);
  ::java::lang::String * provideText();
  ::gnu::java::awt::peer::gtk::GtkImage * provideImage();
  JArray< ::java::lang::String * > * provideURIs();
  JArray< jbyte > * provideContent(::java::lang::String *);
  static jboolean initNativeState(::gnu::java::awt::peer::gtk::GtkClipboard *, ::gnu::java::awt::peer::gtk::GtkClipboard *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
public: // actually package-private
  static ::gnu::java::awt::peer::gtk::GtkClipboard * clipboard;
  static ::gnu::java::awt::peer::gtk::GtkClipboard * selection;
  static ::java::lang::String * stringMimeType;
  static ::java::lang::String * imageMimeType;
  static ::java::lang::String * filesMimeType;
  static jboolean canCache;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_peer_gtk_GtkClipboard__
