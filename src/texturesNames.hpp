/*
 * Copyright (C) 2025, Kazankov Nikolay 
 * <nik.kazankov.05@mail.ru>
 */

#pragma once

// Names of all images with related numbers
enum IMG_names : unsigned {
    // Base part
    // Graphic interface sprites
    IMG_GUI_PAUSE_BUTTON,
    IMG_GUI_QUIT_BUTTON,
    IMG_GUI_SLIDER_BUTTON,
    IMG_GUI_SLIDER_LINE,
    IMG_GUI_TYPE_BOX,

    // Base flags in settings
    IMG_GUI_FLAG_USA,
    IMG_GUI_FLAG_RUS,
    IMG_GUI_FLAG_GER,
    IMG_GUI_FLAG_BEL,

    // Global counter of all textures
    IMG_count,
};


// File names of the corresponding textures
extern const char* texturesFilesNames[IMG_count];
