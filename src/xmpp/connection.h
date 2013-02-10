/*
 * connection.h
 *
 * Copyright (C) 2012, 2013 James Booth <boothj5@gmail.com>
 *
 * This file is part of Profanity.
 *
 * Profanity is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Profanity is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Profanity.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef CONNECTION_H
#define CONNECTION_H

#include <strophe.h>

void connection_free_resources(void);
xmpp_conn_t *connection_get_conn(void);
xmpp_ctx_t *connection_get_ctx(void);
int connection_error_handler(xmpp_conn_t * const conn,
    xmpp_stanza_t * const stanza, void * const userdata);
void connection_set_priority(int priority);
void connection_set_presence_message(const char * const message);

#endif
