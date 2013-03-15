/*
kmsc - Kurento Media Server C/C++ implementation
Copyright (C) 2012 Tikal Technologies

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License version 3
as published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __MEDIA_CONFIG_LOADER__
#define __MEDIA_CONFIG_LOADER__

#include <gst/sdp/gstsdpmessage.h>
#include <glibmm.h>

#define SERVER_GROUP "Server"

GstSDPMessage *load_session_descriptor (Glib::KeyFile &configFile);

#endif /* __MEDIA_CONFIG_LOADER__ */
