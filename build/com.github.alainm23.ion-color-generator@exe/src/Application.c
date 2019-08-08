/* Application.c generated by valac 0.40.16, the Vala compiler
 * generated from Application.vala, do not modify */

/*
* Copyright © 2019 Alain M. (https://github.com/alainm23/planner)
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public
* License as published by the Free Software Foundation; either
* version 2 of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* General Public License for more details.
*
* You should have received a copy of the GNU General Public
* License along with this program; if not, write to the
* Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
* Boston, MA 02110-1301 USA
*
* Authored by: Alain M. <alain23@protonmail.com>
*/


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gio/gio.h>
#include <string.h>
#include <stdlib.h>
#include <gdk/gdk.h>


#define TYPE_APPLICATION (application_get_type ())
#define APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_APPLICATION, Application))
#define APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_APPLICATION, ApplicationClass))
#define IS_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_APPLICATION))
#define IS_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_APPLICATION))
#define APPLICATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_APPLICATION, ApplicationClass))

typedef struct _Application Application;
typedef struct _ApplicationClass ApplicationClass;
typedef struct _ApplicationPrivate ApplicationPrivate;

#define TYPE_MAIN_WINDOW (main_window_get_type ())
#define MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MAIN_WINDOW, MainWindow))
#define MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_MAIN_WINDOW, MainWindowClass))
#define IS_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MAIN_WINDOW))
#define IS_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_MAIN_WINDOW))
#define MAIN_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_MAIN_WINDOW, MainWindowClass))

typedef struct _MainWindow MainWindow;
typedef struct _MainWindowClass MainWindowClass;
enum  {
	APPLICATION_0_PROPERTY,
	APPLICATION_NUM_PROPERTIES
};
static GParamSpec* application_properties[APPLICATION_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_variant_unref0(var) ((var == NULL) ? NULL : (var = (g_variant_unref (var), NULL)))

struct _Application {
	GtkApplication parent_instance;
	ApplicationPrivate * priv;
	MainWindow* main_window;
};

struct _ApplicationClass {
	GtkApplicationClass parent_class;
};


static gpointer application_parent_class = NULL;
extern GSettings* application_settings;
GSettings* application_settings = NULL;
extern Application* application__instance;
Application* application__instance = NULL;

GType application_get_type (void) G_GNUC_CONST;
GType main_window_get_type (void) G_GNUC_CONST;
Application* application_new (void);
Application* application_construct (GType object_type);
static void application_real_activate (GApplication* base);
static gint32 _variant_get1 (GVariant* value);
static gint32 _variant_get2 (GVariant* value);
static gint32 _variant_get3 (GVariant* value);
static gint32 _variant_get4 (GVariant* value);
MainWindow* main_window_new (Application* application);
MainWindow* main_window_construct (GType object_type,
                                   Application* application);
static void __lambda6_ (Application* self);
static void ___lambda6__g_simple_action_activate (GSimpleAction* _sender,
                                           GVariant* parameter,
                                           gpointer self);
gint application_main (gchar** args,
                       int args_length1);
Application* application_get_instance (void);
static void application_finalize (GObject * obj);
static void _vala_application_get_property (GObject * object,
                                     guint property_id,
                                     GValue * value,
                                     GParamSpec * pspec);
static void _vala_array_destroy (gpointer array,
                          gint array_length,
                          GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array,
                       gint array_length,
                       GDestroyNotify destroy_func);


Application*
application_construct (GType object_type)
{
	Application * self = NULL;
#line 27 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	self = (Application*) g_object_new (object_type, "application-id", "com.github.alainm23.ion-color-generator", "flags", G_APPLICATION_FLAGS_NONE, NULL);
#line 26 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	return self;
#line 121 "Application.c"
}


Application*
application_new (void)
{
#line 26 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	return application_construct (TYPE_APPLICATION);
#line 130 "Application.c"
}


static gint32
_variant_get1 (GVariant* value)
{
#line 56 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	return g_variant_get_int32 (value);
#line 139 "Application.c"
}


static gint32
_variant_get2 (GVariant* value)
{
#line 57 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	return g_variant_get_int32 (value);
#line 148 "Application.c"
}


static gint32
_variant_get3 (GVariant* value)
{
#line 60 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	return g_variant_get_int32 (value);
#line 157 "Application.c"
}


static gint32
_variant_get4 (GVariant* value)
{
#line 61 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	return g_variant_get_int32 (value);
#line 166 "Application.c"
}


static void
__lambda6_ (Application* self)
{
	MainWindow* _tmp0_;
#line 76 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp0_ = self->main_window;
#line 76 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	if (_tmp0_ != NULL) {
#line 178 "Application.c"
		MainWindow* _tmp1_;
#line 77 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
		_tmp1_ = self->main_window;
#line 77 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
		gtk_widget_destroy ((GtkWidget*) _tmp1_);
#line 184 "Application.c"
	}
}


static void
___lambda6__g_simple_action_activate (GSimpleAction* _sender,
                                      GVariant* parameter,
                                      gpointer self)
{
#line 75 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	__lambda6_ ((Application*) self);
#line 196 "Application.c"
}


static void
application_real_activate (GApplication* base)
{
	Application * self;
	GList* _tmp0_;
	GVariant* window_size = NULL;
	GSettings* _tmp3_;
	GVariant* _tmp4_;
	GtkAllocation rect = {0};
	GVariant* _tmp5_;
	GVariant* _tmp6_;
	GVariant* _tmp7_;
	gint32 _tmp8_;
	GVariant* _tmp9_;
	GVariant* _tmp10_;
	GVariant* _tmp11_;
	gint32 _tmp12_;
	GVariant* window_position = NULL;
	GSettings* _tmp13_;
	GVariant* _tmp14_;
	gint32 window_x = 0;
	GVariant* _tmp15_;
	GVariant* _tmp16_;
	GVariant* _tmp17_;
	gint32 _tmp18_;
	gint32 _tmp19_;
	gint32 window_y = 0;
	GVariant* _tmp20_;
	GVariant* _tmp21_;
	GVariant* _tmp22_;
	gint32 _tmp23_;
	gint32 _tmp24_;
	MainWindow* _tmp25_;
	gboolean _tmp26_ = FALSE;
	gint32 _tmp27_;
	MainWindow* _tmp32_;
	GtkAllocation _tmp33_;
	MainWindow* _tmp34_;
	GSimpleAction* quit_action = NULL;
	GSimpleAction* _tmp35_;
	gchar* _tmp36_;
	gchar** _tmp37_;
	gchar** _tmp38_;
	gint _tmp38__length1;
	GSimpleAction* _tmp39_;
	GSimpleAction* _tmp40_;
	GtkCssProvider* provider = NULL;
	GtkCssProvider* _tmp41_;
	GtkCssProvider* _tmp42_;
	GdkScreen* _tmp43_;
	GtkCssProvider* _tmp44_;
#line 48 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	self = (Application*) base;
#line 49 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp0_ = gtk_application_get_windows ((GtkApplication*) self);
#line 49 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	if (g_list_length (_tmp0_) > ((guint) 0)) {
#line 257 "Application.c"
		GList* _tmp1_;
		gconstpointer _tmp2_;
#line 50 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
		_tmp1_ = gtk_application_get_windows ((GtkApplication*) self);
#line 50 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
		_tmp2_ = _tmp1_->data;
#line 50 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
		gtk_window_present ((GtkWindow*) _tmp2_);
#line 51 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
		return;
#line 268 "Application.c"
	}
#line 54 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp3_ = application_settings;
#line 54 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp4_ = g_settings_get_value (_tmp3_, "window-size");
#line 54 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	window_size = _tmp4_;
#line 55 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	memset (&rect, 0, sizeof (GtkAllocation));
#line 56 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp5_ = window_size;
#line 56 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp6_ = g_variant_get_child_value (_tmp5_, (gsize) 0);
#line 56 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp7_ = _tmp6_;
#line 56 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp8_ = _variant_get1 (_tmp7_);
#line 56 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	rect.height = (gint) _tmp8_;
#line 56 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_g_variant_unref0 (_tmp7_);
#line 57 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp9_ = window_size;
#line 57 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp10_ = g_variant_get_child_value (_tmp9_, (gsize) 1);
#line 57 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp11_ = _tmp10_;
#line 57 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp12_ = _variant_get2 (_tmp11_);
#line 57 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	rect.width = (gint) _tmp12_;
#line 57 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_g_variant_unref0 (_tmp11_);
#line 59 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp13_ = application_settings;
#line 59 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp14_ = g_settings_get_value (_tmp13_, "window-position");
#line 59 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	window_position = _tmp14_;
#line 60 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp15_ = window_position;
#line 60 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp16_ = g_variant_get_child_value (_tmp15_, (gsize) 0);
#line 60 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp17_ = _tmp16_;
#line 60 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp18_ = _variant_get3 (_tmp17_);
#line 60 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp19_ = _tmp18_;
#line 60 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_g_variant_unref0 (_tmp17_);
#line 60 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	window_x = _tmp19_;
#line 61 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp20_ = window_position;
#line 61 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp21_ = g_variant_get_child_value (_tmp20_, (gsize) 1);
#line 61 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp22_ = _tmp21_;
#line 61 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp23_ = _variant_get4 (_tmp22_);
#line 61 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp24_ = _tmp23_;
#line 61 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_g_variant_unref0 (_tmp22_);
#line 61 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	window_y = _tmp24_;
#line 63 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp25_ = main_window_new (self);
#line 63 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	g_object_ref_sink (_tmp25_);
#line 63 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_g_object_unref0 (self->main_window);
#line 63 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	self->main_window = _tmp25_;
#line 64 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp27_ = window_x;
#line 64 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	if (_tmp27_ != ((gint32) -1)) {
#line 64 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
		_tmp26_ = TRUE;
#line 350 "Application.c"
	} else {
		gint32 _tmp28_;
#line 64 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
		_tmp28_ = window_y;
#line 64 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
		_tmp26_ = _tmp28_ != ((gint32) -1);
#line 357 "Application.c"
	}
#line 64 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	if (_tmp26_) {
#line 361 "Application.c"
		MainWindow* _tmp29_;
		gint32 _tmp30_;
		gint32 _tmp31_;
#line 65 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
		_tmp29_ = self->main_window;
#line 65 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
		_tmp30_ = window_x;
#line 65 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
		_tmp31_ = window_y;
#line 65 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
		gtk_window_move ((GtkWindow*) _tmp29_, (gint) _tmp30_, (gint) _tmp31_);
#line 373 "Application.c"
	}
#line 68 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp32_ = self->main_window;
#line 68 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp33_ = rect;
#line 68 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	gtk_widget_set_allocation ((GtkWidget*) _tmp32_, &_tmp33_);
#line 69 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp34_ = self->main_window;
#line 69 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	gtk_widget_show_all ((GtkWidget*) _tmp34_);
#line 72 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp35_ = g_simple_action_new ("quit", NULL);
#line 72 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	quit_action = _tmp35_;
#line 73 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp36_ = g_strdup ("<Control>q");
#line 73 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp37_ = g_new0 (gchar*, 1 + 1);
#line 73 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp37_[0] = _tmp36_;
#line 73 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp38_ = _tmp37_;
#line 73 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp38__length1 = 1;
#line 73 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	gtk_application_set_accels_for_action ((GtkApplication*) self, "app.quit", _tmp38_);
#line 73 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp38_ = (_vala_array_free (_tmp38_, _tmp38__length1, (GDestroyNotify) g_free), NULL);
#line 75 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp39_ = quit_action;
#line 75 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	g_signal_connect_object (_tmp39_, "activate", (GCallback) ___lambda6__g_simple_action_activate, self, 0);
#line 81 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp40_ = quit_action;
#line 81 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	g_action_map_add_action ((GActionMap*) self, (GAction*) _tmp40_);
#line 84 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp41_ = gtk_css_provider_new ();
#line 84 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	provider = _tmp41_;
#line 85 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp42_ = provider;
#line 85 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	gtk_css_provider_load_from_resource (_tmp42_, "/com/github/alainm23/ion-color-generator/stylesheet.css");
#line 86 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp43_ = gdk_screen_get_default ();
#line 86 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp44_ = provider;
#line 86 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	gtk_style_context_add_provider_for_screen (_tmp43_, (GtkStyleProvider*) _tmp44_, (guint) GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
#line 48 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_g_object_unref0 (provider);
#line 48 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_g_object_unref0 (quit_action);
#line 48 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_g_variant_unref0 (window_position);
#line 48 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_g_variant_unref0 (window_size);
#line 433 "Application.c"
}


static gpointer
_g_object_ref0 (gpointer self)
{
#line 90 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	return self ? g_object_ref (self) : NULL;
#line 442 "Application.c"
}


gint
application_main (gchar** args,
                  int args_length1)
{
	gint result = 0;
	Application* app = NULL;
	Application* _tmp0_;
	Application* _tmp1_;
	Application* _tmp2_;
#line 90 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp0_ = application_get_instance ();
#line 90 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp1_ = _tmp0_;
#line 90 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp2_ = _g_object_ref0 (_tmp1_);
#line 90 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	app = _tmp2_;
#line 91 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	result = g_application_run ((GApplication*) app, args_length1, args);
#line 91 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_g_object_unref0 (app);
#line 91 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	return result;
#line 469 "Application.c"
}


int
main (int argc,
      char ** argv)
{
#line 89 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	return application_main (argv, argc);
#line 479 "Application.c"
}


Application*
application_get_instance (void)
{
	Application* result;
	Application* _tmp0_;
	Application* _tmp2_;
#line 41 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp0_ = application__instance;
#line 41 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	if (_tmp0_ == NULL) {
#line 493 "Application.c"
		Application* _tmp1_;
#line 42 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
		_tmp1_ = application_new ();
#line 42 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
		_g_object_unref0 (application__instance);
#line 42 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
		application__instance = _tmp1_;
#line 501 "Application.c"
	}
#line 44 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp2_ = application__instance;
#line 44 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	result = _tmp2_;
#line 44 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	return result;
#line 509 "Application.c"
}


static void
application_class_init (ApplicationClass * klass)
{
	GSettings* _tmp0_;
#line 22 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	application_parent_class = g_type_class_peek_parent (klass);
#line 22 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	((GApplicationClass *) klass)->activate = (void (*) (GApplication*)) application_real_activate;
#line 22 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_application_get_property;
#line 22 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	G_OBJECT_CLASS (klass)->finalize = application_finalize;
#line 34 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_tmp0_ = g_settings_new ("com.github.alainm23.ion-color-generator");
#line 34 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_g_object_unref0 (application_settings);
#line 34 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	application_settings = _tmp0_;
#line 531 "Application.c"
}


static void
application_instance_init (Application * self)
{
}


static void
application_finalize (GObject * obj)
{
	Application * self;
#line 22 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_APPLICATION, Application);
#line 23 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	_g_object_unref0 (self->main_window);
#line 22 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	G_OBJECT_CLASS (application_parent_class)->finalize (obj);
#line 551 "Application.c"
}


GType
application_get_type (void)
{
	static volatile gsize application_type_id__volatile = 0;
	if (g_once_init_enter (&application_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ApplicationClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) application_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (Application), 0, (GInstanceInitFunc) application_instance_init, NULL };
		GType application_type_id;
		application_type_id = g_type_register_static (gtk_application_get_type (), "Application", &g_define_type_info, 0);
		g_once_init_leave (&application_type_id__volatile, application_type_id);
	}
	return application_type_id__volatile;
}


static void
_vala_application_get_property (GObject * object,
                                guint property_id,
                                GValue * value,
                                GParamSpec * pspec)
{
	Application * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_APPLICATION, Application);
#line 22 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
	switch (property_id) {
#line 579 "Application.c"
		default:
#line 22 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 22 "/home/alain/Proyectos/ion-color-generator/src/Application.vala"
		break;
#line 585 "Application.c"
	}
}


static void
_vala_array_destroy (gpointer array,
                     gint array_length,
                     GDestroyNotify destroy_func)
{
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void
_vala_array_free (gpointer array,
                  gint array_length,
                  GDestroyNotify destroy_func)
{
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}



