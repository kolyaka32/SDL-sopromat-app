/*
 * Copyright (C) 2025, Kazankov Nikolay 
 * <nik.kazankov.05@mail.ru>
 */

#pragma once


// Names of music tracks
enum MUS_names{
    MUS_MENU,          // Music for menu

    // Global counter of all loaded sounds
    MUS_count,
};


// File names of the corresponding music
extern const char* musicFilesNames[MUS_count];
