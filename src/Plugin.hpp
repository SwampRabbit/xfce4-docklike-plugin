/*
 * Docklike Taskbar - A modern, minimalist taskbar for Xfce
 * Copyright (c) 2019-2020 Nicolas Szabo <nszabo@vivaldi.net>
 * Copyright (c) 2020-2021 David Keogh <davidtkeogh@gmail.com>
 * gnu.org/licenses/gpl-3.0
 */

#ifndef PLUGIN_HPP
#define PLUGIN_HPP

#define PLUGIN_WEBSITE "https://github.com/davekeogh/xfce4-docklike-plugin"
#define HELP_WEBSITE "https://github.com/davekeogh/xfce4-docklike-plugin/wiki/Help"
#define PANEL_DEBUG getenv("PANEL_DEBUG") != NULL

#include <gtk/gtk.h>
#include <libwnck/libwnck.h>

#include <iostream>
#include <string>
#include <vector>

#include "AppInfos.hpp"
#include "Dock.hpp"
#include "Hotkeys.hpp"
#include "Settings.hpp"
#include "SettingsDialog.hpp"
#include "Theme.hpp"

extern "C"
{
#include <libxfce4panel/libxfce4panel.h>
#include <libxfce4ui/libxfce4ui.h>
#include <libxfce4util/libxfce4util.h>
}

namespace Plugin
{
	extern XfcePanelPlugin* mXfPlugin;
	extern GdkDevice* mPointer;
	extern GdkDisplay* mDisplay;

	void aboutDialog();
	void remoteEvent(gchar* name, GValue* value);
} // namespace Plugin

#endif