/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_window1 (void)
{
  GtkWidget *window1;
  GtkWidget *fixed1;
  GtkWidget *entry1;
  GtkWidget *Bksp;
  GtkWidget *CE;
  GtkWidget *Clr;
  GtkWidget *EXIT;
  GtkWidget *seven;
  GtkWidget *eight;
  GtkWidget *nine;
  GtkWidget *division;
  GtkWidget *four;
  GtkWidget *five;
  GtkWidget *six;
  GtkWidget *multiplication;
  GtkWidget *two;
  GtkWidget *one;
  GtkWidget *three;
  GtkWidget *minus;
  GtkWidget *zero;
  GtkWidget *dot;
  GtkWidget *equal;
  GtkWidget *plus;

  window1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window1), _("window1"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (window1), fixed1);

  entry1 = gtk_entry_new ();
  gtk_widget_show (entry1);
  gtk_fixed_put (GTK_FIXED (fixed1), entry1, 40, 32);
  gtk_widget_set_size_request (entry1, 360, 72);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry1), 8226);

  Bksp = gtk_button_new_with_mnemonic (_("Bksp"));
  gtk_widget_show (Bksp);
  gtk_fixed_put (GTK_FIXED (fixed1), Bksp, 48, 136);
  gtk_widget_set_size_request (Bksp, 70, 29);

  CE = gtk_button_new_with_mnemonic (_("CE"));
  gtk_widget_show (CE);
  gtk_fixed_put (GTK_FIXED (fixed1), CE, 144, 136);
  gtk_widget_set_size_request (CE, 69, 29);

  Clr = gtk_button_new_with_mnemonic (_("Clr"));
  gtk_widget_show (Clr);
  gtk_fixed_put (GTK_FIXED (fixed1), Clr, 224, 136);
  gtk_widget_set_size_request (Clr, 70, 29);

  EXIT = gtk_button_new_with_mnemonic (_("EXIT"));
  gtk_widget_show (EXIT);
  gtk_fixed_put (GTK_FIXED (fixed1), EXIT, 312, 136);
  gtk_widget_set_size_request (EXIT, 69, 29);

  seven = gtk_button_new_with_mnemonic (_("7"));
  gtk_widget_show (seven);
  gtk_fixed_put (GTK_FIXED (fixed1), seven, 48, 192);
  gtk_widget_set_size_request (seven, 70, 29);

  eight = gtk_button_new_with_mnemonic (_("8"));
  gtk_widget_show (eight);
  gtk_fixed_put (GTK_FIXED (fixed1), eight, 144, 192);
  gtk_widget_set_size_request (eight, 70, 29);

  nine = gtk_button_new_with_mnemonic (_("9"));
  gtk_widget_show (nine);
  gtk_fixed_put (GTK_FIXED (fixed1), nine, 224, 192);
  gtk_widget_set_size_request (nine, 70, 29);

  division = gtk_button_new_with_mnemonic (_("/"));
  gtk_widget_show (division);
  gtk_fixed_put (GTK_FIXED (fixed1), division, 312, 192);
  gtk_widget_set_size_request (division, 69, 29);

  four = gtk_button_new_with_mnemonic (_("4"));
  gtk_widget_show (four);
  gtk_fixed_put (GTK_FIXED (fixed1), four, 48, 248);
  gtk_widget_set_size_request (four, 70, 29);

  five = gtk_button_new_with_mnemonic (_("5"));
  gtk_widget_show (five);
  gtk_fixed_put (GTK_FIXED (fixed1), five, 144, 248);
  gtk_widget_set_size_request (five, 79, 29);

  six = gtk_button_new_with_mnemonic (_("6"));
  gtk_widget_show (six);
  gtk_fixed_put (GTK_FIXED (fixed1), six, 224, 248);
  gtk_widget_set_size_request (six, 79, 29);

  multiplication = gtk_button_new_with_mnemonic (_("*"));
  gtk_widget_show (multiplication);
  gtk_fixed_put (GTK_FIXED (fixed1), multiplication, 312, 248);
  gtk_widget_set_size_request (multiplication, 78, 29);

  two = gtk_button_new_with_mnemonic (_("2"));
  gtk_widget_show (two);
  gtk_fixed_put (GTK_FIXED (fixed1), two, 144, 304);
  gtk_widget_set_size_request (two, 78, 29);

  one = gtk_button_new_with_mnemonic (_("1"));
  gtk_widget_show (one);
  gtk_fixed_put (GTK_FIXED (fixed1), one, 48, 304);
  gtk_widget_set_size_request (one, 79, 29);

  three = gtk_button_new_with_mnemonic (_("3"));
  gtk_widget_show (three);
  gtk_fixed_put (GTK_FIXED (fixed1), three, 224, 304);
  gtk_widget_set_size_request (three, 79, 29);

  minus = gtk_button_new_with_mnemonic (_("-"));
  gtk_widget_show (minus);
  gtk_fixed_put (GTK_FIXED (fixed1), minus, 312, 304);
  gtk_widget_set_size_request (minus, 79, 29);

  zero = gtk_button_new_with_mnemonic (_("0"));
  gtk_widget_show (zero);
  gtk_fixed_put (GTK_FIXED (fixed1), zero, 48, 352);
  gtk_widget_set_size_request (zero, 79, 29);

  dot = gtk_button_new_with_mnemonic (_("."));
  gtk_widget_show (dot);
  gtk_fixed_put (GTK_FIXED (fixed1), dot, 144, 352);
  gtk_widget_set_size_request (dot, 78, 29);

  equal = gtk_button_new_with_mnemonic (_("="));
  gtk_widget_show (equal);
  gtk_fixed_put (GTK_FIXED (fixed1), equal, 224, 352);
  gtk_widget_set_size_request (equal, 79, 29);

  plus = gtk_button_new_with_mnemonic (_("+"));
  gtk_widget_show (plus);
  gtk_fixed_put (GTK_FIXED (fixed1), plus, 312, 352);
  gtk_widget_set_size_request (plus, 78, 29);

  g_signal_connect ((gpointer) Bksp, "clicked",
                    G_CALLBACK (on_Bksp_clicked),
                    NULL);
  g_signal_connect ((gpointer) CE, "clicked",
                    G_CALLBACK (on_CE_clicked),
                    NULL);
  g_signal_connect ((gpointer) Clr, "clicked",
                    G_CALLBACK (on_Clr_clicked),
                    NULL);
  g_signal_connect ((gpointer) EXIT, "clicked",
                    G_CALLBACK (on_EXIT_clicked),
                    NULL);
  g_signal_connect ((gpointer) seven, "clicked",
                    G_CALLBACK (on_seven_clicked),
                    NULL);
  g_signal_connect ((gpointer) eight, "clicked",
                    G_CALLBACK (on_eight_clicked),
                    NULL);
  g_signal_connect ((gpointer) nine, "clicked",
                    G_CALLBACK (on_nine_clicked),
                    NULL);
  g_signal_connect ((gpointer) division, "clicked",
                    G_CALLBACK (on_division_clicked),
                    NULL);
  g_signal_connect ((gpointer) four, "clicked",
                    G_CALLBACK (on_four_clicked),
                    NULL);
  g_signal_connect ((gpointer) five, "clicked",
                    G_CALLBACK (on_five_clicked),
                    NULL);
  g_signal_connect ((gpointer) six, "clicked",
                    G_CALLBACK (on_six_clicked),
                    NULL);
  g_signal_connect ((gpointer) multiplication, "clicked",
                    G_CALLBACK (on_multiplication_clicked),
                    NULL);
  g_signal_connect ((gpointer) two, "clicked",
                    G_CALLBACK (on_two_clicked),
                    NULL);
  g_signal_connect ((gpointer) one, "clicked",
                    G_CALLBACK (on_one_clicked),
                    NULL);
  g_signal_connect ((gpointer) three, "clicked",
                    G_CALLBACK (on_three_clicked),
                    NULL);
  g_signal_connect ((gpointer) minus, "clicked",
                    G_CALLBACK (on_minus_clicked),
                    NULL);
  g_signal_connect ((gpointer) zero, "clicked",
                    G_CALLBACK (on_zero_clicked),
                    NULL);
  g_signal_connect ((gpointer) dot, "clicked",
                    G_CALLBACK (on_dot_clicked),
                    NULL);
  g_signal_connect ((gpointer) equal, "clicked",
                    G_CALLBACK (on_equal_clicked),
                    NULL);
  g_signal_connect ((gpointer) plus, "clicked",
                    G_CALLBACK (on_plus_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window1, window1, "window1");
  GLADE_HOOKUP_OBJECT (window1, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (window1, entry1, "entry1");
  GLADE_HOOKUP_OBJECT (window1, Bksp, "Bksp");
  GLADE_HOOKUP_OBJECT (window1, CE, "CE");
  GLADE_HOOKUP_OBJECT (window1, Clr, "Clr");
  GLADE_HOOKUP_OBJECT (window1, EXIT, "EXIT");
  GLADE_HOOKUP_OBJECT (window1, seven, "seven");
  GLADE_HOOKUP_OBJECT (window1, eight, "eight");
  GLADE_HOOKUP_OBJECT (window1, nine, "nine");
  GLADE_HOOKUP_OBJECT (window1, division, "division");
  GLADE_HOOKUP_OBJECT (window1, four, "four");
  GLADE_HOOKUP_OBJECT (window1, five, "five");
  GLADE_HOOKUP_OBJECT (window1, six, "six");
  GLADE_HOOKUP_OBJECT (window1, multiplication, "multiplication");
  GLADE_HOOKUP_OBJECT (window1, two, "two");
  GLADE_HOOKUP_OBJECT (window1, one, "one");
  GLADE_HOOKUP_OBJECT (window1, three, "three");
  GLADE_HOOKUP_OBJECT (window1, minus, "minus");
  GLADE_HOOKUP_OBJECT (window1, zero, "zero");
  GLADE_HOOKUP_OBJECT (window1, dot, "dot");
  GLADE_HOOKUP_OBJECT (window1, equal, "equal");
  GLADE_HOOKUP_OBJECT (window1, plus, "plus");

  return window1;
}

