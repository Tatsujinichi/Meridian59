// Meridian 59, Copyright 1994-2012 Andrew Kirmse and Chris Kirmse.
// All rights reserved.
//
// This software is distributed under a license that is described in
// the LICENSE file that accompanies it.
//
// Meridian is a registered trademark.
/*
 * critical_section.h
 *
 */
#pragma once
#ifdef BLAK_PLATFORM_LINUX
#ifndef _CRITICAL_SECTION_H
#define _CRITICAL_SECTION_H

// Linux version of a Windows CRITICAL_SECTION, using a pthread mutex.


#include <pthread.h>

typedef pthread_mutex_t CRITICAL_SECTION;

void InitializeCriticalSection(CRITICAL_SECTION *m);
void EnterCriticalSection(CRITICAL_SECTION *m);
void LeaveCriticalSection(CRITICAL_SECTION *m);
void DeleteCriticalSection(CRITICAL_SECTION *m);


#endif

#endif
