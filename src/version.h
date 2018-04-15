// Copyright (c) 2012 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_VERSION_H
#define BITCOIN_VERSION_H

#include "clientversion.h"
#include <string>

//
// network protocol versioning
//

static const int PROTOCOL_VERSION = 100050;
static const int PROTOCOL_START = 100050;

// earlier versions not supported as of Feb 2012, and are disconnected
static const int MIN_PROTO_VERSION = 209;

// nTime field added to CAddress, starting with this version;
// if possible, avoid requesting addresses nodes older than this
static const int CADDR_TIME_VERSION = 31402;

// only request blocks from nodes outside this range of versions
static const int NOBLKS_VERSION_START = 100002;
static const int NOBLKS_VERSION_END = 100006;

// BIP 0031, pong message, is enabled for all versions AFTER this one
static const int BIP0031_VERSION = 100000;

// "mempool" command, enhanced "getdata" behavior starts with this version:
static const int MEMPOOL_GD_VERSION = 100002;

#define DISPLAY_VERSION_MAJOR       1
#define DISPLAY_VERSION_MINOR       3
#define DISPLAY_VERSION_REVISION   2
#define DISPLAY_VERSION_BUILD       0

#endif
