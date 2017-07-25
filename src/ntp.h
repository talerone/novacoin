// Copyright (c) 2013-2016 The taler developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or https://opensource.org/licenses/mit-license.php
#ifndef taler_NTP_H
#define taler_NTP_H

// Get time from random server and return server address.
int64_t NtpGetTime(CNetAddr& ip);

// Get time from provided server.
int64_t NtpGetTime(const std::string &strHostName);

extern std::string strTrustedUpstream;

// NTP time samples thread.
void ThreadNtpSamples(void* parg);

// NTP offset
int64_t GetNtpOffset();

#endif // taler_NTP_H
