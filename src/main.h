/* GIMP Plug-in Template
 * Copyright (C) 2000  Michael Natterer <mitch@gimp.org> (the "Author").
 * All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHOR BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * Except as contained in this notice, the name of the Author of the
 * Software shall not be used in advertising or otherwise to promote the
 * sale, use or other dealings in this Software without prior written
 * authorization from the Author.
 */

#ifndef __MAIN_H__
#define __MAIN_H__

gint32          load_jeph (const gchar * filename,
                           GimpRunMode   runmode,
                           gboolean      preview);

GimpPDBStatusType write_jp2(const gchar * filename, gint          image_ID, gint          drawable_ID);

typedef struct
{
    gint      dummy1;
    gint      dummy2;
    gint      dummy3;
    guint     seed;
    gboolean  random_seed;
} PlugInVals;

typedef struct
{
    gint32    image_id;
} PlugInImageVals;

typedef struct
{
    gint32    drawable_id;
} PlugInDrawableVals;

typedef struct
{
    gboolean  chain_active;
} PlugInUIVals;


/*  Default values  */

extern const PlugInVals         default_vals;
extern const PlugInImageVals    default_image_vals;
extern const PlugInDrawableVals default_drawable_vals;
extern const PlugInUIVals       default_ui_vals;

/*  Constants  */
/* ----------------------------------------------------------------------- */
/* ----------------------------------------------------------------------- */

#endif /* __MAIN_H__ */
