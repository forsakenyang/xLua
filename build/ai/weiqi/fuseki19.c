/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * This is GNU Go, a Go program. Contact gnugo@gnu.org, or see       *
 * http://www.gnu.org/software/gnugo/ for more information.          *
 *                                                                   *
 * Copyright 1999, 2000, 2001, 2002, 2003 and 2004                   *
 * by the Free Software Foundation.                                  *
 *                                                                   *
 * This program is free software; you can redistribute it and/or     *
 * modify it under the terms of the GNU General Public License as    *
 * published by the Free Software Foundation - version 2             *
 *                                                                   *
 * This program is distributed in the hope that it will be useful,   *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of    *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the     *
 * GNU General Public License in file COPYING for more details.      *
 *                                                                   *
 * You should have received a copy of the GNU General Public         *
 * License along with this program; if not, write to the Free        *
 * Software Foundation, Inc., 59 Temple Place - Suite 330,           *
 * Boston, MA 02111, USA.                                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h> /* for NULL */
#include "liberty.h"
#include "patterns.h"

static struct patval_a fuseki190[] = {{0,-1}}; /* Dummy element, not used. */

static struct patval_a fuseki191[] = {{0,-1}}; /* Dummy element, not used. */

static struct patval_a fuseki192[] = {{0,-1}}; /* Dummy element, not used. */

static struct patval_a fuseki193[] = {{0,-1}}; /* Dummy element, not used. */

static struct patval_a fuseki194[] = {{0,-1}}; /* Dummy element, not used. */

static struct patval_a fuseki195[] = {{0,-1}}; /* Dummy element, not used. */

static struct patval_a fuseki196[] = {
  {900,1}
};

static struct patval_a fuseki197[] = {
  {468,1}
};

static struct patval_a fuseki198[] = {
  {468,1}
};

static struct patval_a fuseki199[] = {
  {900,1}
};

static struct patval_a fuseki1910[] = {
  {900,1}
};

static struct patval_a fuseki1911[] = {
  {900,1}
};

static struct patval_a fuseki1912[] = {
  {900,1}
};

static struct patval_a fuseki1913[] = {
  {900,1}
};

static struct patval_a fuseki1914[] = {
  {900,1}
};

static struct patval_a fuseki1915[] = {
  {900,1}
};

static struct patval_a fuseki1916[] = {
  {912,1}
};

static struct patval_a fuseki1917[] = {
  {468,1}
};

static struct patval_a fuseki1918[] = {
  {900,1}
};

static struct patval_a fuseki1919[] = {
  {900,1}
};

static struct patval_a fuseki1920[] = {
  {900,1}
};

static struct patval_a fuseki1921[] = {
  {468,1},	{900,2}
};

static struct patval_a fuseki1922[] = {
  {468,1},	{900,2}
};

static struct patval_a fuseki1923[] = {
  {468,1},	{900,2}
};

static struct patval_a fuseki1924[] = {
  {468,1},	{900,2}
};

static struct patval_a fuseki1925[] = {
  {900,1},	{468,2}
};

static struct patval_a fuseki1926[] = {
  {468,1},	{900,2}
};

static struct patval_a fuseki1927[] = {
  {468,1},	{900,2}
};

static struct patval_a fuseki1928[] = {
  {456,1},	{900,1},	{468,2}
};

static struct patval_a fuseki1929[] = {
  {912,1},	{900,1},	{456,2}
};

static struct patval_a fuseki1930[] = {
  {900,1},	{912,1},	{468,2}
};

static struct patval_a fuseki1931[] = {
  {900,1},	{912,1},	{468,2}
};

static struct patval_a fuseki1932[] = {
  {900,1},	{912,1},	{468,2}
};

static struct patval_a fuseki1933[] = {
  {912,1},	{900,2}
};

static struct patval_a fuseki1934[] = {
  {456,1},	{900,2}
};

static struct patval_a fuseki1935[] = {
  {912,1},	{900,2}
};

static struct patval_a fuseki1936[] = {
  {456,1},	{900,2}
};

static struct patval_a fuseki1937[] = {
  {912,1},	{468,2}
};

static struct patval_a fuseki1938[] = {
  {900,1},	{912,2}
};

static struct patval_a fuseki1939[] = {
  {912,1},	{900,2}
};

static struct patval_a fuseki1940[] = {
  {912,1},	{900,2}
};

static struct patval_a fuseki1941[] = {
  {900,1},	{913,1},	{468,2}
};

static struct patval_a fuseki1942[] = {
  {900,1},	{913,1},	{468,2}
};

static struct patval_a fuseki1943[] = {
  {900,1},	{913,1},	{468,2}
};

static struct patval_a fuseki1944[] = {
  {900,1},	{913,1},	{468,2}
};

static struct patval_a fuseki1945[] = {
  {900,1},	{913,1},	{468,2}
};

static struct patval_a fuseki1946[] = {
  {900,1},	{913,1},	{468,2}
};

static struct patval_a fuseki1947[] = {
  {937,1}
};

static struct patval_a fuseki1948[] = {
  {937,1}
};

static struct patval_a fuseki1949[] = {
  {937,1}
};

static struct patval_a fuseki1950[] = {
  {913,1}
};

static struct patval_a fuseki1951[] = {
  {469,1}
};

static struct patval_a fuseki1952[] = {
  {937,1}
};

static struct patval_a fuseki1953[] = {
  {913,1}
};

static struct patval_a fuseki1954[] = {
  {455,1}
};

static struct patval_a fuseki1955[] = {
  {455,1},	{468,1},	{900,2},	{912,2}
};

static struct patval_a fuseki1956[] = {
  {456,1},	{937,1},	{468,2},	{912,2}
};

static struct patval_a fuseki1957[] = {
  {913,1},	{900,1},	{468,2},	{456,2}
};

static struct patval_a fuseki1958[] = {
  {912,1},	{431,1},	{900,2},	{456,2}
};

static struct patval_a fuseki1959[] = {
  {913,1},	{900,1},	{468,2},	{456,2}
};

static struct patval_a fuseki1960[] = {
  {419,1},	{900,1},	{468,2},	{912,2}
};

static struct patval_a fuseki1961[] = {
  {455,1},	{468,1},	{900,2},	{912,2}
};

static struct patval_a fuseki1962[] = {
  {456,1},	{468,1},	{900,2},	{913,2}
};

static struct patval_a fuseki1963[] = {
  {456,1},	{468,1},	{900,2},	{913,2}
};

static struct patval_a fuseki1964[] = {
  {456,1},	{900,1},	{468,2},	{949,2}
};

static struct patval_a fuseki1965[] = {
  {456,1},	{468,1},	{900,2},	{913,2}
};

static struct patval_a fuseki1966[] = {
  {912,1},	{468,1},	{900,2},	{419,2}
};

static struct patval_a fuseki1967[] = {
  {456,1},	{468,1},	{900,2},	{913,2}
};

static struct patval_a fuseki1968[] = {
  {913,1},	{468,2}
};

static struct patval_a fuseki1969[] = {
  {455,1},	{900,2}
};

static struct patval_a fuseki1970[] = {
  {949,1},	{900,2}
};

static struct patval_a fuseki1971[] = {
  {949,1},	{900,2}
};

static struct patval_a fuseki1972[] = {
  {455,1},	{900,2}
};

static struct patval_a fuseki1973[] = {
  {431,1},	{456,2}
};

static struct patval_a fuseki1974[] = {
  {949,1},	{900,2}
};

static struct patval_a fuseki1975[] = {
  {912,1},	{468,1},	{900,2},	{456,2}
};

static struct patval_a fuseki1976[] = {
  {456,1},	{468,1},	{900,2},	{912,2}
};

static struct patval_a fuseki1977[] = {
  {912,1},	{900,1},	{468,2},	{456,2}
};

static struct patval_a fuseki1978[] = {
  {456,1},	{468,1},	{900,2},	{912,2}
};

static struct patval_a fuseki1979[] = {
  {912,1},	{468,1},	{900,2},	{456,2}
};

static struct patval_a fuseki1980[] = {
  {913,1},	{900,1},	{543,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki1981[] = {
  {913,1},	{900,1},	{543,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki1982[] = {
  {913,1},	{900,1},	{543,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki1983[] = {
  {913,1},	{900,1},	{543,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki1984[] = {
  {419,1},	{900,1},	{429,1},	{468,2},
  {912,2}
};

static struct patval_a fuseki1985[] = {
  {949,1},	{468,1},	{939,1},	{900,2},
  {456,2}
};

static struct patval_a fuseki1986[] = {
  {913,1},	{900,1},	{456,2}
};

static struct patval_a fuseki1987[] = {
  {899,1},	{912,1},	{468,2}
};

static struct patval_a fuseki1988[] = {
  {913,1},	{900,1},	{456,2}
};

static struct patval_a fuseki1989[] = {
  {913,1},	{900,1},	{456,2}
};

static struct patval_a fuseki1990[] = {
  {913,1},	{900,1},	{456,2}
};

static struct patval_a fuseki1991[] = {
  {543,1},	{900,1},	{912,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki1992[] = {
  {543,1},	{900,1},	{912,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki1993[] = {
  {529,1},	{912,1},	{900,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki1994[] = {
  {456,1},	{900,1},	{947,1},	{468,2},
  {912,2}
};

static struct patval_a fuseki1995[] = {
  {529,1},	{912,1},	{900,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki1996[] = {
  {912,1},	{468,1},	{421,1},	{900,2},
  {456,2}
};

static struct patval_a fuseki1997[] = {
  {456,1},	{468,1},	{913,2}
};

static struct patval_a fuseki1998[] = {
  {912,1},	{900,1},	{455,2}
};

static struct patval_a fuseki1999[] = {
  {456,1},	{900,1},	{949,2}
};

static struct patval_a fuseki19100[] = {
  {456,1},	{900,1},	{431,2}
};

static struct patval_a fuseki19101[] = {
  {912,1},	{900,1},	{455,2}
};

static struct patval_a fuseki19102[] = {
  {468,1},	{937,2}
};

static struct patval_a fuseki19103[] = {
  {468,1},	{937,2}
};

static struct patval_a fuseki19104[] = {
  {912,1},	{455,2}
};

static struct patval_a fuseki19105[] = {
  {468,1},	{937,2}
};

static struct patval_a fuseki19106[] = {
  {468,1},	{899,2}
};

static struct patval_a fuseki19107[] = {
  {468,1},	{937,2}
};

static struct patval_a fuseki19108[] = {
  {912,1},	{900,1},	{906,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19109[] = {
  {456,1},	{678,1},	{900,1},	{468,2},
  {912,2}
};

static struct patval_a fuseki19110[] = {
  {912,1},	{900,1},	{906,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19111[] = {
  {455,1},	{468,1},	{900,2},	{913,2}
};

static struct patval_a fuseki19112[] = {
  {455,1},	{468,1},	{900,2},	{913,2}
};

static struct patval_a fuseki19113[] = {
  {456,1},	{937,1},	{431,2},	{912,2}
};

static struct patval_a fuseki19114[] = {
  {455,1},	{468,1},	{900,2},	{913,2}
};

static struct patval_a fuseki19115[] = {
  {455,1},	{468,1},	{900,2},	{913,2}
};

static struct patval_a fuseki19116[] = {
  {899,1},	{912,1},	{456,2},	{469,2}
};

static struct patval_a fuseki19117[] = {
  {900,1},	{949,1},	{468,2}
};

static struct patval_a fuseki19118[] = {
  {900,1},	{949,1},	{468,2}
};

static struct patval_a fuseki19119[] = {
  {912,1},	{937,1},	{456,2}
};

static struct patval_a fuseki19120[] = {
  {900,1},	{949,1},	{468,2}
};

static struct patval_a fuseki19121[] = {
  {912,1},	{900,1},	{457,1},	{468,2},
  {455,2}
};

static struct patval_a fuseki19122[] = {
  {456,1},	{900,1},	{505,1},	{431,2},
  {912,2}
};

static struct patval_a fuseki19123[] = {
  {912,1},	{900,1},	{467,1},	{456,2},
  {469,2}
};

static struct patval_a fuseki19124[] = {
  {912,1},	{900,1},	{457,1},	{468,2},
  {455,2}
};

static struct patval_a fuseki19125[] = {
  {912,1},	{690,1},	{468,1},	{937,2},
  {456,2}
};

static struct patval_a fuseki19126[] = {
  {456,1},	{678,1},	{900,1},	{431,2},
  {912,2}
};

static struct patval_a fuseki19127[] = {
  {456,1},	{937,2}
};

static struct patval_a fuseki19128[] = {
  {456,1},	{937,2}
};

static struct patval_a fuseki19129[] = {
  {912,1},	{899,2}
};

static struct patval_a fuseki19130[] = {
  {456,1},	{937,2}
};

static struct patval_a fuseki19131[] = {
  {825,1},	{456,1},	{468,1},	{906,2},
  {900,2},	{912,2}
};

static struct patval_a fuseki19132[] = {
  {456,1},	{839,1},	{468,1},	{906,2},
  {912,2},	{900,2}
};

static struct patval_a fuseki19133[] = {
  {456,1},	{839,1},	{468,1},	{906,2},
  {912,2},	{900,2}
};

static struct patval_a fuseki19134[] = {
  {468,1},	{912,1},	{421,1},	{900,2},
  {456,2},	{678,2}
};

static struct patval_a fuseki19135[] = {
  {456,1},	{468,1},	{900,2},	{949,2}
};

static struct patval_a fuseki19136[] = {
  {456,1},	{468,1},	{937,2},	{912,2}
};

static struct patval_a fuseki19137[] = {
  {456,1},	{468,1},	{900,2},	{949,2}
};

static struct patval_a fuseki19138[] = {
  {456,1},	{468,1},	{937,2},	{912,2}
};

static struct patval_a fuseki19139[] = {
  {456,1},	{468,1},	{937,2},	{912,2}
};

static struct patval_a fuseki19140[] = {
  {912,1},	{468,1},	{900,2},	{455,2}
};

static struct patval_a fuseki19141[] = {
  {913,1},	{900,1},	{455,2}
};

static struct patval_a fuseki19142[] = {
  {456,1},	{937,1},	{431,2}
};

static struct patval_a fuseki19143[] = {
  {419,1},	{900,1},	{949,2}
};

static struct patval_a fuseki19144[] = {
  {913,1},	{900,1},	{455,2}
};

static struct patval_a fuseki19145[] = {
  {455,1},	{468,1},	{913,2}
};

static struct patval_a fuseki19146[] = {
  {455,1},	{468,1},	{913,2}
};

static struct patval_a fuseki19147[] = {
  {913,1},	{900,1},	{455,2}
};

static struct patval_a fuseki19148[] = {
  {684,1}
};

static struct patval_a fuseki19149[] = {
  {431,1},	{912,1},	{421,1},	{900,2},
  {456,2},	{678,2}
};

static struct patval_a fuseki19150[] = {
  {456,1},	{937,1},	{947,1},	{468,2},
  {690,2},	{912,2}
};

static struct patval_a fuseki19151[] = {
  {455,1},	{825,1},	{468,1},	{906,2},
  {900,2},	{912,2}
};

static struct patval_a fuseki19152[] = {
  {455,1},	{825,1},	{468,1},	{906,2},
  {900,2},	{912,2}
};

static struct patval_a fuseki19153[] = {
  {455,1},	{825,1},	{468,1},	{906,2},
  {900,2},	{912,2}
};

static struct patval_a fuseki19154[] = {
  {431,1},	{900,2}
};

static struct patval_a fuseki19155[] = {
  {469,1},	{900,2}
};

static struct patval_a fuseki19156[] = {
  {469,1},	{900,2}
};

static struct patval_a fuseki19157[] = {
  {469,1},	{900,2}
};

static struct patval_a fuseki19158[] = {
  {469,1},	{900,2}
};

static struct patval_a fuseki19159[] = {
  {431,1},	{900,2}
};

static struct patval_a fuseki19160[] = {
  {455,1},	{912,2}
};

static struct patval_a fuseki19161[] = {
  {456,1},	{468,1},	{937,2},	{913,2}
};

static struct patval_a fuseki19162[] = {
  {456,1},	{468,1},	{937,2},	{913,2}
};

static struct patval_a fuseki19163[] = {
  {456,1},	{468,1},	{937,2},	{913,2}
};

static struct patval_a fuseki19164[] = {
  {912,1},	{900,1},	{419,2},	{469,2}
};

static struct patval_a fuseki19165[] = {
  {456,1},	{468,1},	{937,2},	{913,2}
};

static struct patval_a fuseki19166[] = {
  {937,1},	{913,1},	{468,2}
};

static struct patval_a fuseki19167[] = {
  {937,1},	{913,1},	{468,2}
};

static struct patval_a fuseki19168[] = {
  {899,1},	{419,1},	{468,2}
};

static struct patval_a fuseki19169[] = {
  {492,1},	{900,2}
};

static struct patval_a fuseki19170[] = {
  {492,1},	{900,2}
};

static struct patval_a fuseki19171[] = {
  {938,1},	{912,2}
};

static struct patval_a fuseki19172[] = {
  {492,1},	{900,2}
};

static struct patval_a fuseki19173[] = {
  {492,1},	{900,2}
};

static struct patval_a fuseki19174[] = {
  {492,1},	{900,2}
};

static struct patval_a fuseki19175[] = {
  {937,1},	{912,1},	{468,2}
};

static struct patval_a fuseki19176[] = {
  {937,1},	{912,1},	{468,2}
};

static struct patval_a fuseki19177[] = {
  {455,1},	{900,1},	{912,2}
};

static struct patval_a fuseki19178[] = {
  {505,1}
};

static struct patval_a fuseki19179[] = {
  {863,1}
};

static struct patval_a fuseki19180[] = {
  {505,1}
};

static struct patval_a fuseki19181[] = {
  {913,1},	{900,1},	{944,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19182[] = {
  {913,1},	{900,1},	{944,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19183[] = {
  {654,1},	{912,1},	{431,1},	{900,2},
  {456,2}
};

static struct patval_a fuseki19184[] = {
  {654,1},	{912,1},	{431,1},	{900,2},
  {456,2}
};

static struct patval_a fuseki19185[] = {
  {913,1},	{900,1},	{944,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19186[] = {
  {899,1},	{912,1},	{942,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19187[] = {
  {913,1},	{937,1},	{456,2}
};

static struct patval_a fuseki19188[] = {
  {913,1},	{937,1},	{456,2}
};

static struct patval_a fuseki19189[] = {
  {913,1},	{937,1},	{456,2}
};

static struct patval_a fuseki19190[] = {
  {455,1},	{937,1},	{468,2}
};

static struct patval_a fuseki19191[] = {
  {825,1},	{456,1},	{468,1},	{900,2},
  {913,2}
};

static struct patval_a fuseki19192[] = {
  {529,1},	{912,1},	{900,1},	{456,2},
  {469,2}
};

static struct patval_a fuseki19193[] = {
  {529,1},	{912,1},	{900,1},	{456,2},
  {469,2}
};

static struct patval_a fuseki19194[] = {
  {529,1},	{912,1},	{900,1},	{456,2},
  {469,2}
};

static struct patval_a fuseki19195[] = {
  {912,1},	{468,1},	{939,1},	{900,2},
  {419,2}
};

static struct patval_a fuseki19196[] = {
  {900,1},	{468,1},	{913,2}
};

static struct patval_a fuseki19197[] = {
  {468,1},	{900,1},	{455,2}
};

static struct patval_a fuseki19198[] = {
  {900,1},	{468,1},	{949,2}
};

static struct patval_a fuseki19199[] = {
  {468,1},	{900,1},	{455,2}
};

static struct patval_a fuseki19200[] = {
  {900,1},	{468,1},	{949,2}
};

static struct patval_a fuseki19201[] = {
  {468,1},	{900,1},	{455,2}
};

static struct patval_a fuseki19202[] = {
  {900,1},	{468,1},	{949,2}
};

static struct patval_a fuseki19203[] = {
  {913,1},	{900,1},	{907,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19204[] = {
  {913,1},	{900,1},	{907,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19205[] = {
  {456,1},	{715,1},	{937,1},	{468,2},
  {912,2}
};

static struct patval_a fuseki19206[] = {
  {949,1},	{727,1},	{468,1},	{900,2},
  {456,2}
};

static struct patval_a fuseki19207[] = {
  {913,1},	{900,1},	{907,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19208[] = {
  {913,1},	{900,1},	{907,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19209[] = {
  {455,1},	{468,1},	{460,1},	{457,2},
  {900,2},	{912,2}
};

static struct patval_a fuseki19210[] = {
  {455,1},	{468,1},	{460,1},	{457,2},
  {900,2},	{912,2}
};

static struct patval_a fuseki19211[] = {
  {455,1},	{468,1},	{460,1},	{457,2},
  {900,2},	{912,2}
};

static struct patval_a fuseki19212[] = {
  {455,1},	{468,1},	{460,1},	{457,2},
  {900,2},	{912,2}
};

static struct patval_a fuseki19213[] = {
  {900,1},	{684,2}
};

static struct patval_a fuseki19214[] = {
  {456,1},	{684,2}
};

static struct patval_a fuseki19215[] = {
  {900,1},	{684,2}
};

static struct patval_a fuseki19216[] = {
  {468,1},	{684,2}
};

static struct patval_a fuseki19217[] = {
  {900,1},	{684,2}
};

static struct patval_a fuseki19218[] = {
  {912,1},	{684,2}
};

static struct patval_a fuseki19219[] = {
  {912,1},	{684,2}
};

static struct patval_a fuseki19220[] = {
  {862,1}
};

static struct patval_a fuseki19221[] = {
  {938,1}
};

static struct patval_a fuseki19222[] = {
  {938,1}
};

static struct patval_a fuseki19223[] = {
  {862,1}
};

static struct patval_a fuseki19224[] = {
  {938,1}
};

static struct patval_a fuseki19225[] = {
  {751,1},	{912,1},	{906,1},	{900,1},
  {456,2},	{468,2},	{825,2}
};

static struct patval_a fuseki19226[] = {
  {456,1},	{678,1},	{900,1},	{423,1},
  {421,2},	{468,2},	{912,2}
};

static struct patval_a fuseki19227[] = {
  {765,1},	{900,1},	{906,1},	{912,1},
  {468,2},	{456,2},	{839,2}
};

static struct patval_a fuseki19228[] = {
  {455,1},	{469,1},	{912,2},	{900,2}
};

static struct patval_a fuseki19229[] = {
  {455,1},	{469,1},	{912,2},	{900,2}
};

static struct patval_a fuseki19230[] = {
  {899,1},	{913,1},	{468,2},	{456,2}
};

static struct patval_a fuseki19231[] = {
  {468,1},	{948,1},	{900,2},	{456,2}
};

static struct patval_a fuseki19232[] = {
  {492,1},	{468,1},	{900,2},	{912,2}
};

static struct patval_a fuseki19233[] = {
  {456,1},	{938,1},	{468,2},	{912,2}
};

static struct patval_a fuseki19234[] = {
  {492,1},	{468,1},	{900,2},	{912,2}
};

static struct patval_a fuseki19235[] = {
  {456,1},	{938,1},	{468,2},	{912,2}
};

static struct patval_a fuseki19236[] = {
  {900,1},	{420,1},	{468,2},	{912,2}
};

static struct patval_a fuseki19237[] = {
  {912,1},	{431,1},	{456,2},	{899,2}
};

static struct patval_a fuseki19238[] = {
  {455,1},	{468,1},	{900,2},	{949,2}
};

static struct patval_a fuseki19239[] = {
  {455,1},	{468,1},	{900,2},	{949,2}
};

static struct patval_a fuseki19240[] = {
  {456,1},	{469,1},	{912,2},	{937,2}
};

static struct patval_a fuseki19241[] = {
  {900,1},	{468,1},	{912,2}
};

static struct patval_a fuseki19242[] = {
  {900,1},	{468,1},	{912,2}
};

static struct patval_a fuseki19243[] = {
  {456,1},	{468,1},	{429,1},	{900,2},
  {912,2},	{543,2}
};

static struct patval_a fuseki19244[] = {
  {468,1},	{456,1},	{421,1},	{900,2},
  {529,2},	{912,2}
};

static struct patval_a fuseki19245[] = {
  {456,1},	{468,1},	{429,1},	{900,2},
  {912,2},	{543,2}
};

static struct patval_a fuseki19246[] = {
  {455,1},	{937,2}
};

static struct patval_a fuseki19247[] = {
  {431,1},	{455,2}
};

static struct patval_a fuseki19248[] = {
  {949,1},	{899,2}
};

static struct patval_a fuseki19249[] = {
  {949,1},	{899,2}
};

static struct patval_a fuseki19250[] = {
  {455,1},	{937,2}
};

static struct patval_a fuseki19251[] = {
  {913,1},	{900,1},	{543,1},	{468,2},
  {455,2}
};

static struct patval_a fuseki19252[] = {
  {913,1},	{900,1},	{543,1},	{468,2},
  {455,2}
};

static struct patval_a fuseki19253[] = {
  {913,1},	{900,1},	{543,1},	{468,2},
  {455,2}
};

static struct patval_a fuseki19254[] = {
  {949,1},	{468,1},	{939,1},	{900,2},
  {419,2}
};

static struct patval_a fuseki19255[] = {
  {913,1},	{900,1},	{543,1},	{468,2},
  {455,2}
};

static struct patval_a fuseki19256[] = {
  {913,1},	{900,1},	{543,1},	{468,2},
  {455,2}
};

static struct patval_a fuseki19257[] = {
  {913,1},	{900,1},	{543,1},	{468,2},
  {455,2}
};

static struct patval_a fuseki19258[] = {
  {913,1},	{900,1},	{543,1},	{468,2},
  {455,2}
};

static struct patval_a fuseki19259[] = {
  {949,1},	{468,1},	{939,1},	{900,2},
  {419,2}
};

static struct patval_a fuseki19260[] = {
  {455,1},	{431,1},	{900,2},	{912,2}
};

static struct patval_a fuseki19261[] = {
  {455,1},	{431,1},	{900,2},	{912,2}
};

static struct patval_a fuseki19262[] = {
  {913,1},	{431,1},	{900,2},	{456,2}
};

static struct patval_a fuseki19263[] = {
  {469,1},	{949,1},	{900,2},	{456,2}
};

static struct patval_a fuseki19264[] = {
  {456,1},	{468,1},	{429,1},	{900,2},
  {543,2},	{913,2}
};

static struct patval_a fuseki19265[] = {
  {912,1},	{900,1},	{947,1},	{456,2},
  {469,2},	{839,2}
};

static struct patval_a fuseki19266[] = {
  {456,1},	{468,1},	{429,1},	{900,2},
  {543,2},	{913,2}
};

static struct patval_a fuseki19267[] = {
  {456,1},	{617,1},	{468,1},	{912,2},
  {543,2},	{900,2}
};

static struct patval_a fuseki19268[] = {
  {468,1},	{603,1},	{456,1},	{900,2},
  {529,2},	{912,2}
};

static struct patval_a fuseki19269[] = {
  {456,1},	{617,1},	{468,1},	{912,2},
  {543,2},	{900,2}
};

static struct patval_a fuseki19270[] = {
  {876,1},	{900,1},	{949,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19271[] = {
  {876,1},	{900,1},	{949,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19272[] = {
  {876,1},	{900,1},	{949,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19273[] = {
  {862,1},	{913,1},	{937,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19274[] = {
  {862,1},	{913,1},	{937,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19275[] = {
  {862,1},	{913,1},	{937,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19276[] = {
  {899,1},	{419,1},	{938,1},	{468,2},
  {912,2}
};

static struct patval_a fuseki19277[] = {
  {900,1},	{912,1},	{431,2}
};

static struct patval_a fuseki19278[] = {
  {912,1},	{468,1},	{899,2}
};

static struct patval_a fuseki19279[] = {
  {950,1}
};

static struct patval_a fuseki19280[] = {
  {936,1}
};

static struct patval_a fuseki19281[] = {
  {936,1}
};

static struct patval_a fuseki19282[] = {
  {432,1}
};

static struct patval_a fuseki19283[] = {
  {456,1},	{678,1},	{900,1},	{423,1},
  {421,2},	{431,2},	{912,2}
};

static struct patval_a fuseki19284[] = {
  {906,1},	{751,1},	{912,1},	{900,1},
  {455,2},	{468,2},	{825,2}
};

static struct patval_a fuseki19285[] = {
  {906,1},	{751,1},	{912,1},	{900,1},
  {455,2},	{468,2},	{825,2}
};

static struct patval_a fuseki19286[] = {
  {456,1},	{678,1},	{900,1},	{941,1},
  {939,2},	{468,2},	{949,2}
};

static struct patval_a fuseki19287[] = {
  {906,1},	{751,1},	{912,1},	{900,1},
  {455,2},	{468,2},	{825,2}
};

static struct patval_a fuseki19288[] = {
  {912,1},	{506,1},	{431,1},	{505,2},
  {456,2},	{900,2}
};

static struct patval_a fuseki19289[] = {
  {455,1},	{468,1},	{420,1},	{457,2},
  {900,2},	{912,2}
};

static struct patval_a fuseki19290[] = {
  {899,1},	{456,1},	{468,2},	{912,2}
};

static struct patval_a fuseki19291[] = {
  {419,1},	{468,1},	{900,2},	{912,2}
};

static struct patval_a fuseki19292[] = {
  {455,1},	{900,1},	{468,2},	{912,2}
};

static struct patval_a fuseki19293[] = {
  {949,1},	{900,1},	{468,2},	{456,2}
};

static struct patval_a fuseki19294[] = {
  {913,1},	{900,1},	{457,1},	{468,2},
  {455,2}
};

static struct patval_a fuseki19295[] = {
  {913,1},	{900,1},	{457,1},	{468,2},
  {455,2}
};

static struct patval_a fuseki19296[] = {
  {455,1},	{468,1},	{911,1},	{900,2},
  {913,2}
};

static struct patval_a fuseki19297[] = {
  {913,1},	{900,1},	{457,1},	{468,2},
  {455,2}
};

static struct patval_a fuseki19298[] = {
  {419,1},	{468,1},	{913,2}
};

static struct patval_a fuseki19299[] = {
  {455,1},	{900,1},	{949,2}
};

static struct patval_a fuseki19300[] = {
  {455,1},	{900,1},	{949,2}
};

static struct patval_a fuseki19301[] = {
  {949,1},	{900,1},	{455,2}
};

static struct patval_a fuseki19302[] = {
  {455,1},	{900,1},	{949,2}
};

static struct patval_a fuseki19303[] = {
  {468,1},	{456,1},	{458,1},	{900,2},
  {529,2},	{912,2}
};

static struct patval_a fuseki19304[] = {
  {456,1},	{826,1},	{900,1},	{939,2},
  {468,2},	{912,2}
};

static struct patval_a fuseki19305[] = {
  {542,1},	{912,1},	{468,1},	{429,2},
  {456,2},	{900,2}
};

static struct patval_a fuseki19306[] = {
  {913,1},	{900,1},	{948,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19307[] = {
  {913,1},	{900,1},	{948,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19308[] = {
  {913,1},	{900,1},	{948,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19309[] = {
  {913,1},	{900,1},	{948,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19310[] = {
  {456,1},	{468,1},	{466,1},	{900,2},
  {543,2},	{913,2}
};

static struct patval_a fuseki19311[] = {
  {456,1},	{468,1},	{466,1},	{900,2},
  {543,2},	{913,2}
};

static struct patval_a fuseki19312[] = {
  {456,1},	{468,1},	{466,1},	{900,2},
  {543,2},	{913,2}
};

static struct patval_a fuseki19313[] = {
  {911,1},	{900,2}
};

static struct patval_a fuseki19314[] = {
  {911,1},	{900,2}
};

static struct patval_a fuseki19315[] = {
  {911,1},	{900,2}
};

static struct patval_a fuseki19316[] = {
  {911,1},	{900,2}
};

static struct patval_a fuseki19317[] = {
  {505,1},	{912,2}
};

static struct patval_a fuseki19318[] = {
  {456,1},	{900,1},	{543,1},	{505,1},
  {912,2},	{506,2},	{431,2}
};

static struct patval_a fuseki19319[] = {
  {468,1},	{913,2}
};

static struct patval_a fuseki19320[] = {
  {912,1},	{937,2}
};

static struct patval_a fuseki19321[] = {
  {468,1},	{913,2}
};

static struct patval_a fuseki19322[] = {
  {900,1},	{455,2}
};

static struct patval_a fuseki19323[] = {
  {912,1},	{937,2}
};

static struct patval_a fuseki19324[] = {
  {912,1},	{937,2}
};

static struct patval_a fuseki19325[] = {
  {912,1},	{937,2}
};

static struct patval_a fuseki19326[] = {
  {456,1},	{899,2}
};

static struct patval_a fuseki19327[] = {
  {455,1},	{419,1},	{468,1},	{420,1},
  {457,2},	{421,2},	{900,2},	{912,2}
};

static struct patval_a fuseki19328[] = {
  {506,1},	{469,1},	{431,1},	{912,1},
  {505,2},	{900,2},	{456,2},	{543,2}
};

static struct patval_a fuseki19329[] = {
  {455,1},	{419,1},	{468,1},	{420,1},
  {457,2},	{421,2},	{900,2},	{912,2}
};

static struct patval_a fuseki19330[] = {
  {455,1},	{419,1},	{468,1},	{420,1},
  {457,2},	{421,2},	{900,2},	{912,2}
};

static struct patval_a fuseki19331[] = {
  {468,1},	{825,1},	{936,1},	{456,1},
  {900,2},	{906,2},	{751,2},	{912,2}
};

static struct patval_a fuseki19332[] = {
  {456,1},	{912,1},	{468,2},	{900,2}
};

static struct patval_a fuseki19333[] = {
  {468,1},	{900,1},	{456,2},	{912,2}
};

static struct patval_a fuseki19334[] = {
  {543,1},	{900,1},	{949,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19335[] = {
  {455,1},	{900,1},	{429,1},	{468,2},
  {912,2}
};

static struct patval_a fuseki19336[] = {
  {543,1},	{900,1},	{949,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19337[] = {
  {455,1},	{900,1},	{429,1},	{468,2},
  {912,2}
};

static struct patval_a fuseki19338[] = {
  {543,1},	{900,1},	{949,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19339[] = {
  {529,1},	{912,1},	{937,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19340[] = {
  {543,1},	{900,1},	{949,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19341[] = {
  {543,1},	{900,1},	{949,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19342[] = {
  {751,1},	{912,1},	{906,1},	{937,1},
  {900,1},	{456,2},	{936,2},	{468,2},
  {825,2}
};

static struct patval_a fuseki19343[] = {
  {419,1},	{900,2}
};

static struct patval_a fuseki19344[] = {
  {419,1},	{900,2}
};

static struct patval_a fuseki19345[] = {
  {913,1},	{900,2}
};

static struct patval_a fuseki19346[] = {
  {913,1},	{900,2}
};

static struct patval_a fuseki19347[] = {
  {913,1},	{900,2}
};

static struct patval_a fuseki19348[] = {
  {432,1},	{900,2}
};

static struct patval_a fuseki19349[] = {
  {418,1},	{912,2}
};

static struct patval_a fuseki19350[] = {
  {432,1},	{900,2}
};

static struct patval_a fuseki19351[] = {
  {936,1},	{468,2}
};

static struct patval_a fuseki19352[] = {
  {912,1},	{900,1},	{420,1},	{468,2},
  {455,2}
};

static struct patval_a fuseki19353[] = {
  {912,1},	{900,1},	{420,1},	{468,2},
  {455,2}
};

static struct patval_a fuseki19354[] = {
  {456,1},	{900,1},	{506,1},	{912,2},
  {431,2}
};

static struct patval_a fuseki19355[] = {
  {468,1},	{456,1},	{938,1},	{899,2},
  {912,2}
};

static struct patval_a fuseki19356[] = {
  {912,1},	{900,1},	{420,1},	{468,2},
  {455,2}
};

static struct patval_a fuseki19357[] = {
  {912,1},	{900,1},	{430,1},	{456,2},
  {469,2}
};

static struct patval_a fuseki19358[] = {
  {456,1},	{900,1},	{876,1},	{949,2},
  {468,2}
};

static struct patval_a fuseki19359[] = {
  {455,1},	{839,1},	{468,1},	{906,2},
  {912,2},	{900,2}
};

static struct patval_a fuseki19360[] = {
  {455,1},	{839,1},	{468,1},	{906,2},
  {912,2},	{900,2}
};

static struct patval_a fuseki19361[] = {
  {431,1},	{912,1},	{939,1},	{900,2},
  {456,2},	{678,2}
};

static struct patval_a fuseki19362[] = {
  {468,1},	{949,1},	{421,1},	{900,2},
  {456,2},	{678,2}
};

static struct patval_a fuseki19363[] = {
  {455,1},	{839,1},	{468,1},	{906,2},
  {912,2},	{900,2}
};

static struct patval_a fuseki19364[] = {
  {455,1},	{839,1},	{468,1},	{906,2},
  {912,2},	{900,2}
};

static struct patval_a fuseki19365[] = {
  {468,1},	{949,1},	{421,1},	{900,2},
  {456,2},	{678,2}
};

static struct patval_a fuseki19366[] = {
  {455,1},	{839,1},	{468,1},	{906,2},
  {912,2},	{900,2}
};

static struct patval_a fuseki19367[] = {
  {825,1},	{456,1},	{469,1},	{906,2},
  {912,2},	{900,2}
};

static struct patval_a fuseki19368[] = {
  {493,1},	{468,1},	{900,2},	{912,2}
};

static struct patval_a fuseki19369[] = {
  {493,1},	{468,1},	{900,2},	{912,2}
};

static struct patval_a fuseki19370[] = {
  {493,1},	{468,1},	{900,2},	{912,2}
};

static struct patval_a fuseki19371[] = {
  {912,1},	{467,1},	{900,2},	{456,2}
};

static struct patval_a fuseki19372[] = {
  {468,1},	{901,2}
};

static struct patval_a fuseki19373[] = {
  {468,1},	{863,2}
};

static struct patval_a fuseki19374[] = {
  {900,1},	{467,2}
};

static struct patval_a fuseki19375[] = {
  {468,1},	{863,2}
};

static struct patval_a fuseki19376[] = {
  {900,1},	{505,2}
};

static struct patval_a fuseki19377[] = {
  {468,1},	{863,2}
};

static struct patval_a fuseki19378[] = {
  {468,1},	{863,2}
};

static struct patval_a fuseki19379[] = {
  {900,1},	{505,2}
};

static struct patval_a fuseki19380[] = {
  {468,1},	{901,2}
};

static struct patval_a fuseki19381[] = {
  {468,1},	{863,2}
};

static struct patval_a fuseki19382[] = {
  {456,1},	{468,1},	{943,1},	{900,2},
  {949,2},	{876,2}
};

static struct patval_a fuseki19383[] = {
  {456,1},	{468,1},	{943,1},	{900,2},
  {949,2},	{876,2}
};

static struct patval_a fuseki19384[] = {
  {456,1},	{468,1},	{943,1},	{900,2},
  {949,2},	{876,2}
};

static struct patval_a fuseki19385[] = {
  {456,1},	{468,1},	{911,1},	{900,2},
  {543,2},	{913,2}
};

static struct patval_a fuseki19386[] = {
  {456,1},	{468,1},	{911,1},	{900,2},
  {543,2},	{913,2}
};

static struct patval_a fuseki19387[] = {
  {456,1},	{468,1},	{911,1},	{900,2},
  {543,2},	{913,2}
};

static struct patval_a fuseki19388[] = {
  {456,1},	{468,1},	{911,1},	{900,2},
  {543,2},	{913,2}
};

static struct patval_a fuseki19389[] = {
  {456,1},	{468,1},	{911,1},	{900,2},
  {543,2},	{913,2}
};

static struct patval_a fuseki19390[] = {
  {456,1},	{468,1},	{911,1},	{900,2},
  {543,2},	{913,2}
};

static struct patval_a fuseki19391[] = {
  {419,1},	{937,1},	{468,2},	{949,2}
};

static struct patval_a fuseki19392[] = {
  {949,1},	{431,1},	{900,2},	{419,2}
};

static struct patval_a fuseki19393[] = {
  {455,1},	{469,1},	{900,2},	{913,2}
};

static struct patval_a fuseki19394[] = {
  {455,1},	{469,1},	{900,2},	{913,2}
};

static struct patval_a fuseki19395[] = {
  {949,1},	{431,1},	{900,2},	{419,2}
};

static struct patval_a fuseki19396[] = {
  {455,1},	{469,1},	{912,2},	{899,2}
};

static struct patval_a fuseki19397[] = {
  {949,1},	{431,1},	{900,2},	{419,2}
};

static struct patval_a fuseki19398[] = {
  {949,1},	{431,1},	{937,2},	{456,2}
};

static struct patval_a fuseki19399[] = {
  {900,1},	{876,1},	{468,2}
};

static struct patval_a fuseki19400[] = {
  {900,1},	{876,1},	{468,2}
};

static struct patval_a fuseki19401[] = {
  {900,1},	{876,1},	{468,2}
};

static struct patval_a fuseki19402[] = {
  {913,1},	{900,1},	{944,1},	{468,2},
  {455,2}
};

static struct patval_a fuseki19403[] = {
  {455,1},	{468,1},	{424,1},	{900,2},
  {913,2}
};

static struct patval_a fuseki19404[] = {
  {913,1},	{900,1},	{944,1},	{468,2},
  {455,2}
};

static struct patval_a fuseki19405[] = {
  {900,1},	{912,1},	{506,2}
};

static struct patval_a fuseki19406[] = {
  {912,1},	{900,1},	{492,2}
};

static struct patval_a fuseki19407[] = {
  {912,1},	{468,1},	{420,2}
};

static struct patval_a fuseki19408[] = {
  {456,1},	{900,1},	{948,2}
};

static struct patval_a fuseki19409[] = {
  {456,1},	{900,1},	{948,2}
};

static struct patval_a fuseki19410[] = {
  {456,1},	{913,1},	{468,2},	{900,2}
};

static struct patval_a fuseki19411[] = {
  {455,1},	{912,1},	{468,2},	{900,2}
};

static struct patval_a fuseki19412[] = {
  {456,1},	{949,1},	{468,2},	{900,2}
};

static struct patval_a fuseki19413[] = {
  {456,1},	{913,1},	{468,2},	{900,2}
};

static struct patval_a fuseki19414[] = {
  {456,1},	{949,1},	{468,2},	{900,2}
};

static struct patval_a fuseki19415[] = {
  {469,1},	{949,1},	{900,2},	{419,2}
};

static struct patval_a fuseki19416[] = {
  {469,1},	{949,1},	{900,2},	{419,2}
};

static struct patval_a fuseki19417[] = {
  {455,1},	{431,1},	{900,2},	{913,2}
};

static struct patval_a fuseki19418[] = {
  {455,1},	{937,1},	{431,2},	{912,2}
};

static struct patval_a fuseki19419[] = {
  {457,1},	{567,1},	{900,1},	{912,1},
  {460,2},	{468,2},	{455,2}
};

static struct patval_a fuseki19420[] = {
  {457,1},	{567,1},	{900,1},	{912,1},
  {460,2},	{468,2},	{455,2}
};

static struct patval_a fuseki19421[] = {
  {876,1},	{900,1},	{949,1},	{468,2},
  {455,2}
};

static struct patval_a fuseki19422[] = {
  {899,1},	{456,1},	{938,1},	{431,2},
  {912,2}
};

static struct patval_a fuseki19423[] = {
  {468,1},	{936,2}
};

static struct patval_a fuseki19424[] = {
  {468,1},	{936,2}
};

static struct patval_a fuseki19425[] = {
  {912,1},	{418,2}
};

static struct patval_a fuseki19426[] = {
  {468,1},	{936,2}
};

static struct patval_a fuseki19427[] = {
  {468,1},	{936,2}
};

static struct patval_a fuseki19428[] = {
  {456,1},	{950,2}
};

static struct patval_a fuseki19429[] = {
  {468,1},	{936,2}
};

static struct patval_a fuseki19430[] = {
  {492,1},	{468,1},	{900,2},	{913,2}
};

static struct patval_a fuseki19431[] = {
  {492,1},	{468,1},	{900,2},	{913,2}
};

static struct patval_a fuseki19432[] = {
  {468,1},	{948,1},	{900,2},	{419,2}
};

static struct patval_a fuseki19433[] = {
  {468,1},	{948,1},	{900,2},	{419,2}
};

static struct patval_a fuseki19434[] = {
  {492,1},	{468,1},	{900,2},	{913,2}
};

static struct patval_a fuseki19435[] = {
  {492,1},	{468,1},	{900,2},	{913,2}
};

static struct patval_a fuseki19436[] = {
  {492,1},	{468,1},	{900,2},	{913,2}
};

static struct patval_a fuseki19437[] = {
  {543,1},	{900,1},	{913,1},	{690,1},
  {468,2},	{456,2},	{429,2}
};

static struct patval_a fuseki19438[] = {
  {419,1},	{900,1},	{462,1},	{429,1},
  {468,2},	{912,2},	{543,2}
};

static struct patval_a fuseki19439[] = {
  {419,1},	{900,1},	{462,1},	{429,1},
  {468,2},	{912,2},	{543,2}
};

static struct patval_a fuseki19440[] = {
  {543,1},	{900,1},	{913,1},	{690,1},
  {468,2},	{456,2},	{429,2}
};

static struct patval_a fuseki19441[] = {
  {543,1},	{900,1},	{913,1},	{690,1},
  {468,2},	{456,2},	{429,2}
};

static struct patval_a fuseki19442[] = {
  {431,1},	{900,1},	{456,2}
};

static struct patval_a fuseki19443[] = {
  {431,1},	{900,1},	{456,2}
};

static struct patval_a fuseki19444[] = {
  {900,1},	{469,1},	{912,2}
};

static struct patval_a fuseki19445[] = {
  {900,1},	{469,1},	{912,2}
};

static struct patval_a fuseki19446[] = {
  {900,1},	{469,1},	{912,2}
};

static struct patval_a fuseki19447[] = {
  {419,1},	{912,1},	{468,2}
};

static struct patval_a fuseki19448[] = {
  {937,1},	{468,1},	{912,2}
};

static struct patval_a fuseki19449[] = {
  {913,1},	{900,1},	{907,1},	{468,2},
  {455,2}
};

static struct patval_a fuseki19450[] = {
  {913,1},	{900,1},	{907,1},	{468,2},
  {455,2}
};

static struct patval_a fuseki19451[] = {
  {913,1},	{900,1},	{907,1},	{468,2},
  {455,2}
};

static struct patval_a fuseki19452[] = {
  {899,1},	{912,1},	{905,1},	{456,2},
  {469,2}
};

static struct patval_a fuseki19453[] = {
  {455,1},	{468,1},	{937,2},	{913,2}
};

static struct patval_a fuseki19454[] = {
  {949,1},	{468,1},	{419,2},	{899,2}
};

static struct patval_a fuseki19455[] = {
  {455,1},	{468,1},	{937,2},	{913,2}
};

static struct patval_a fuseki19456[] = {
  {913,1},	{900,1},	{431,2},	{455,2}
};

static struct patval_a fuseki19457[] = {
  {543,1},	{900,1},	{432,1},	{912,1},
  {468,2},	{456,2},	{617,2}
};

static struct patval_a fuseki19458[] = {
  {543,1},	{900,1},	{432,1},	{912,1},
  {468,2},	{456,2},	{617,2}
};

static struct patval_a fuseki19459[] = {
  {456,1},	{937,1},	{906,1},	{947,1},
  {468,2},	{838,2},	{912,2}
};

static struct patval_a fuseki19460[] = {
  {543,1},	{900,1},	{913,1},	{690,1},
  {468,2},	{456,2},	{466,2}
};

static struct patval_a fuseki19461[] = {
  {543,1},	{900,1},	{913,1},	{690,1},
  {468,2},	{456,2},	{466,2}
};

static struct patval_a fuseki19462[] = {
  {455,1},	{825,1},	{678,1},	{468,1},
  {902,2},	{900,2},	{912,2}
};

static struct patval_a fuseki19463[] = {
  {419,1},	{900,1},	{462,1},	{429,1},
  {468,2},	{542,2},	{912,2}
};

static struct patval_a fuseki19464[] = {
  {543,1},	{900,1},	{913,1},	{690,1},
  {468,2},	{456,2},	{466,2}
};

static struct patval_a fuseki19465[] = {
  {456,1},	{912,1},	{429,1},	{468,2},
  {900,2}
};

static struct patval_a fuseki19466[] = {
  {839,1},	{900,1},	{468,1},	{912,2},
  {456,2}
};

static struct patval_a fuseki19467[] = {
  {456,1},	{543,1},	{912,1},	{468,2},
  {900,2}
};

static struct patval_a fuseki19468[] = {
  {839,1},	{900,1},	{468,1},	{912,2},
  {456,2}
};

static struct patval_a fuseki19469[] = {
  {468,1},	{900,1},	{421,1},	{456,2},
  {912,2}
};

static struct patval_a fuseki19470[] = {
  {839,1},	{900,1},	{468,1},	{912,2},
  {456,2}
};

static struct patval_a fuseki19471[] = {
  {456,1},	{617,1},	{468,1},	{543,2},
  {900,2},	{913,2}
};

static struct patval_a fuseki19472[] = {
  {456,1},	{617,1},	{468,1},	{543,2},
  {900,2},	{913,2}
};

static struct patval_a fuseki19473[] = {
  {468,1},	{912,1},	{427,1},	{429,2},
  {419,2},	{900,2}
};

static struct patval_a fuseki19474[] = {
  {419,1},	{900,1},	{947,1},	{468,2},
  {912,2}
};

static struct patval_a fuseki19475[] = {
  {529,1},	{913,1},	{900,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19476[] = {
  {455,1},	{839,1},	{468,1},	{912,2},
  {900,2}
};

static struct patval_a fuseki19477[] = {
  {529,1},	{913,1},	{900,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19478[] = {
  {529,1},	{913,1},	{900,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19479[] = {
  {529,1},	{913,1},	{900,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19480[] = {
  {419,1},	{900,1},	{947,1},	{468,2},
  {912,2}
};

static struct patval_a fuseki19481[] = {
  {825,1},	{456,1},	{468,1},	{944,2},
  {900,2},	{913,2}
};

static struct patval_a fuseki19482[] = {
  {456,1},	{900,1},	{429,1},	{468,2},
  {949,2},	{728,2}
};

static struct patval_a fuseki19483[] = {
  {825,1},	{456,1},	{468,1},	{944,2},
  {900,2},	{913,2}
};

static struct patval_a fuseki19484[] = {
  {913,1},	{937,1},	{455,2}
};

static struct patval_a fuseki19485[] = {
  {913,1},	{937,1},	{455,2}
};

static struct patval_a fuseki19486[] = {
  {913,1},	{937,1},	{455,2}
};

static struct patval_a fuseki19487[] = {
  {899,1},	{419,1},	{949,2}
};

static struct patval_a fuseki19488[] = {
  {469,1},	{949,1},	{419,2}
};

static struct patval_a fuseki19489[] = {
  {899,1},	{949,1},	{469,2}
};

static struct patval_a fuseki19490[] = {
  {728,1},	{900,1},	{949,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19491[] = {
  {728,1},	{900,1},	{949,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19492[] = {
  {714,1},	{912,1},	{937,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19493[] = {
  {455,1},	{900,1},	{424,1},	{468,2},
  {912,2}
};

static struct patval_a fuseki19494[] = {
  {455,1},	{900,1},	{424,1},	{468,2},
  {912,2}
};

static struct patval_a fuseki19495[] = {
  {684,1},	{900,2}
};

static struct patval_a fuseki19496[] = {
  {684,1},	{912,2}
};

static struct patval_a fuseki19497[] = {
  {684,1},	{900,2}
};

static struct patval_a fuseki19498[] = {
  {529,1},	{913,1},	{937,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19499[] = {
  {529,1},	{913,1},	{937,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19500[] = {
  {455,1},	{937,1},	{429,1},	{468,2},
  {912,2}
};

static struct patval_a fuseki19501[] = {
  {455,1},	{937,1},	{429,1},	{468,2},
  {912,2}
};

static struct patval_a fuseki19502[] = {
  {529,1},	{913,1},	{937,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19503[] = {
  {529,1},	{913,1},	{937,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19504[] = {
  {468,1},	{456,1},	{911,1},	{937,2},
  {862,2},	{913,2}
};

static struct patval_a fuseki19505[] = {
  {468,1},	{456,1},	{901,1},	{899,2},
  {949,2},	{876,2}
};

static struct patval_a fuseki19506[] = {
  {468,1},	{456,1},	{911,1},	{937,2},
  {862,2},	{913,2}
};

static struct patval_a fuseki19507[] = {
  {468,1},	{456,1},	{911,1},	{937,2},
  {862,2},	{913,2}
};

static struct patval_a fuseki19508[] = {
  {505,1},	{900,2}
};

static struct patval_a fuseki19509[] = {
  {505,1},	{900,2}
};

static struct patval_a fuseki19510[] = {
  {467,1},	{900,2}
};

static struct patval_a fuseki19511[] = {
  {467,1},	{900,2}
};

static struct patval_a fuseki19512[] = {
  {456,1},	{468,1},	{939,1},	{900,2},
  {912,2}
};

static struct patval_a fuseki19513[] = {
  {456,1},	{900,1},	{543,1},	{912,2},
  {468,2}
};

static struct patval_a fuseki19514[] = {
  {825,1},	{912,1},	{468,1},	{900,2},
  {456,2}
};

static struct patval_a fuseki19515[] = {
  {456,1},	{468,1},	{939,1},	{900,2},
  {912,2}
};

static struct patval_a fuseki19516[] = {
  {456,1},	{468,1},	{900,2},	{876,2}
};

static struct patval_a fuseki19517[] = {
  {456,1},	{468,1},	{900,2},	{876,2}
};

static struct patval_a fuseki19518[] = {
  {456,1},	{900,1},	{948,2},	{468,2}
};

static struct patval_a fuseki19519[] = {
  {949,1},	{431,1},	{456,2}
};

static struct patval_a fuseki19520[] = {
  {455,1},	{469,1},	{900,2}
};

static struct patval_a fuseki19521[] = {
  {899,1},	{913,1},	{456,2}
};

static struct patval_a fuseki19522[] = {
  {419,1},	{937,1},	{912,2}
};

static struct patval_a fuseki19523[] = {
  {455,1},	{468,1},	{429,1},	{900,2},
  {912,2},	{543,2}
};

static struct patval_a fuseki19524[] = {
  {939,1},	{913,1},	{900,1},	{825,2},
  {468,2},	{456,2}
};

static struct patval_a fuseki19525[] = {
  {421,1},	{456,1},	{469,1},	{529,2},
  {912,2},	{900,2}
};

static struct patval_a fuseki19526[] = {
  {421,1},	{456,1},	{469,1},	{529,2},
  {912,2},	{900,2}
};

static struct patval_a fuseki19527[] = {
  {468,1},	{911,1},	{900,2},	{913,2}
};

static struct patval_a fuseki19528[] = {
  {468,1},	{911,1},	{900,2},	{913,2}
};

static struct patval_a fuseki19529[] = {
  {457,1},	{900,1},	{455,2},	{468,2}
};

static struct patval_a fuseki19530[] = {
  {468,1},	{911,1},	{900,2},	{913,2}
};

static struct patval_a fuseki19531[] = {
  {468,1},	{911,1},	{900,2},	{913,2}
};

static struct patval_a fuseki19532[] = {
  {468,1},	{911,1},	{900,2},	{913,2}
};

static struct patval_a fuseki19533[] = {
  {468,1},	{911,1},	{900,2},	{913,2}
};

static struct patval_a fuseki19534[] = {
  {543,1},	{900,1},	{470,1},	{912,1},
  {468,2},	{456,2},	{429,2}
};

static struct patval_a fuseki19535[] = {
  {454,1},	{529,1},	{912,1},	{900,1},
  {421,2},	{468,2},	{456,2}
};

static struct patval_a fuseki19536[] = {
  {912,1},	{900,1},	{505,1},	{431,2},
  {455,2}
};

static struct patval_a fuseki19537[] = {
  {912,1},	{900,1},	{505,1},	{431,2},
  {455,2}
};

static struct patval_a fuseki19538[] = {
  {912,1},	{493,1},	{900,1},	{419,2},
  {469,2}
};

static struct patval_a fuseki19539[] = {
  {912,1},	{468,1},	{457,1},	{937,2},
  {455,2}
};

static struct patval_a fuseki19540[] = {
  {456,1},	{617,1},	{468,1},	{469,1},
  {432,2},	{912,2},	{543,2},	{900,2}
};

static struct patval_a fuseki19541[] = {
  {543,1},	{900,1},	{431,1},	{432,1},
  {912,1},	{468,2},	{469,2},	{456,2},
  {617,2}
};

static struct patval_a fuseki19542[] = {
  {456,1},	{900,1},	{505,1},	{431,2},
  {949,2}
};

static struct patval_a fuseki19543[] = {
  {912,1},	{900,1},	{457,1},	{455,2},
  {469,2}
};

static struct patval_a fuseki19544[] = {
  {468,1},	{456,1},	{901,1},	{899,2},
  {913,2}
};

static struct patval_a fuseki19545[] = {
  {912,1},	{900,1},	{457,1},	{455,2},
  {469,2}
};

static struct patval_a fuseki19546[] = {
  {455,1},	{468,1},	{943,1},	{900,2},
  {949,2},	{876,2}
};

static struct patval_a fuseki19547[] = {
  {899,1},	{912,1},	{425,1},	{431,2},
  {456,2},	{506,2}
};

static struct patval_a fuseki19548[] = {
  {943,1},	{456,1},	{469,1},	{862,2},
  {912,2},	{937,2}
};

static struct patval_a fuseki19549[] = {
  {455,1},	{468,1},	{943,1},	{900,2},
  {949,2},	{876,2}
};

static struct patval_a fuseki19550[] = {
  {419,1},	{900,1},	{691,1},	{468,2},
  {948,2},	{913,2}
};

static struct patval_a fuseki19551[] = {
  {943,1},	{456,1},	{469,1},	{862,2},
  {912,2},	{937,2}
};

static struct patval_a fuseki19552[] = {
  {900,1},	{912,1},	{432,2}
};

static struct patval_a fuseki19553[] = {
  {900,1},	{912,1},	{432,2}
};

static struct patval_a fuseki19554[] = {
  {468,1},	{456,1},	{936,2}
};

static struct patval_a fuseki19555[] = {
  {875,1},	{468,1},	{900,2},	{949,2}
};

static struct patval_a fuseki19556[] = {
  {875,1},	{468,1},	{900,2},	{949,2}
};

static struct patval_a fuseki19557[] = {
  {875,1},	{468,1},	{900,2},	{949,2}
};

static struct patval_a fuseki19558[] = {
  {468,1},	{457,1},	{900,2},	{455,2}
};

static struct patval_a fuseki19559[] = {
  {456,1},	{863,1},	{937,2},	{912,2}
};

static struct patval_a fuseki19560[] = {
  {468,1},	{938,2}
};

static struct patval_a fuseki19561[] = {
  {468,1},	{938,2}
};

static struct patval_a fuseki19562[] = {
  {900,1},	{430,2}
};

static struct patval_a fuseki19563[] = {
  {468,1},	{938,2}
};

static struct patval_a fuseki19564[] = {
  {468,1},	{862,2}
};

static struct patval_a fuseki19565[] = {
  {468,1},	{912,1},	{463,1},	{429,2},
  {419,2},	{900,2}
};

static struct patval_a fuseki19566[] = {
  {468,1},	{912,1},	{463,1},	{429,2},
  {419,2},	{900,2}
};

static struct patval_a fuseki19567[] = {
  {456,1},	{653,1},	{468,1},	{900,2},
  {543,2},	{913,2}
};

static struct patval_a fuseki19568[] = {
  {431,1},	{948,1},	{900,2},	{456,2}
};

static struct patval_a fuseki19569[] = {
  {492,1},	{469,1},	{912,2},	{900,2}
};

static struct patval_a fuseki19570[] = {
  {455,1},	{506,1},	{912,2},	{900,2}
};

static struct patval_a fuseki19571[] = {
  {455,1},	{506,1},	{912,2},	{900,2}
};

static struct patval_a fuseki19572[] = {
  {862,1},	{913,1},	{468,2},	{456,2}
};

static struct patval_a fuseki19573[] = {
  {862,1},	{913,1},	{468,2},	{456,2}
};

static struct patval_a fuseki19574[] = {
  {529,1},	{912,1},	{678,1},	{900,1},
  {421,2},	{468,2},	{456,2}
};

static struct patval_a fuseki19575[] = {
  {468,1},	{912,1},	{906,1},	{939,1},
  {900,2},	{825,2},	{456,2}
};

static struct patval_a fuseki19576[] = {
  {912,1},	{900,1},	{543,1},	{690,1},
  {468,2},	{456,2},	{429,2}
};

static struct patval_a fuseki19577[] = {
  {456,1},	{900,1},	{906,1},	{947,1},
  {468,2},	{912,2},	{839,2}
};

static struct patval_a fuseki19578[] = {
  {468,1},	{900,1},	{455,2},	{912,2}
};

static struct patval_a fuseki19579[] = {
  {468,1},	{900,1},	{456,2},	{913,2}
};

static struct patval_a fuseki19580[] = {
  {468,1},	{900,1},	{419,2},	{912,2}
};

static struct patval_a fuseki19581[] = {
  {468,1},	{900,1},	{456,2},	{913,2}
};

static struct patval_a fuseki19582[] = {
  {912,1},	{900,1},	{906,1},	{455,2},
  {469,2}
};

static struct patval_a fuseki19583[] = {
  {456,1},	{678,1},	{900,1},	{431,2},
  {949,2}
};

static struct patval_a fuseki19584[] = {
  {899,1},	{469,1},	{912,2}
};

static struct patval_a fuseki19585[] = {
  {431,1},	{937,1},	{456,2}
};

static struct patval_a fuseki19586[] = {
  {899,1},	{469,1},	{912,2}
};

static struct patval_a fuseki19587[] = {
  {455,1},	{460,1},	{468,1},	{494,1},
  {457,2},	{567,2},	{900,2},	{912,2}
};

static struct patval_a fuseki19588[] = {
  {949,1},	{468,1},	{456,2},	{899,2}
};

static struct patval_a fuseki19589[] = {
  {912,1},	{431,1},	{900,2},	{455,2}
};

static struct patval_a fuseki19590[] = {
  {455,1},	{468,1},	{937,2},	{912,2}
};

static struct patval_a fuseki19591[] = {
  {455,1},	{468,1},	{937,2},	{912,2}
};

static struct patval_a fuseki19592[] = {
  {455,1},	{468,1},	{937,2},	{912,2}
};

static struct patval_a fuseki19593[] = {
  {456,1},	{801,1},	{468,1},	{907,2},
  {900,2},	{913,2}
};

static struct patval_a fuseki19594[] = {
  {456,1},	{801,1},	{468,1},	{907,2},
  {900,2},	{913,2}
};

static struct patval_a fuseki19595[] = {
  {456,1},	{801,1},	{468,1},	{907,2},
  {900,2},	{913,2}
};

static struct patval_a fuseki19596[] = {
  {900,1},	{912,1},	{505,2}
};

static struct patval_a fuseki19597[] = {
  {900,1},	{912,1},	{505,2}
};

static struct patval_a fuseki19598[] = {
  {456,1},	{900,1},	{911,2}
};

static struct patval_a fuseki19599[] = {
  {900,1},	{912,1},	{505,2}
};

static struct patval_a fuseki19600[] = {
  {912,1},	{900,1},	{493,2}
};

static struct patval_a fuseki19601[] = {
  {825,1},	{456,1},	{468,1},	{907,2},
  {900,2},	{913,2}
};

static struct patval_a fuseki19602[] = {
  {825,1},	{456,1},	{468,1},	{907,2},
  {900,2},	{913,2}
};

static struct patval_a fuseki19603[] = {
  {825,1},	{456,1},	{468,1},	{907,2},
  {900,2},	{913,2}
};

static struct patval_a fuseki19604[] = {
  {468,1},	{912,1},	{939,1},	{900,2},
  {419,2},	{641,2}
};

static struct patval_a fuseki19605[] = {
  {468,1},	{912,1},	{939,1},	{900,2},
  {419,2},	{641,2}
};

static struct patval_a fuseki19606[] = {
  {495,1},	{567,1},	{900,1},	{457,1},
  {912,1},	{455,2},	{460,2},	{468,2},
  {494,2}
};

static struct patval_a fuseki19607[] = {
  {690,1},	{912,1},	{468,1},	{900,2},
  {456,2},	{678,2}
};

static struct patval_a fuseki19608[] = {
  {690,1},	{912,1},	{468,1},	{900,2},
  {456,2},	{678,2}
};

static struct patval_a fuseki19609[] = {
  {419,1},	{900,1},	{465,1},	{429,1},
  {466,2},	{468,2},	{690,2},	{912,2}
};

static struct patval_a fuseki19610[] = {
  {456,1},	{469,1},	{542,1},	{467,2},
  {912,2},	{900,2}
};

static struct patval_a fuseki19611[] = {
  {455,1},	{530,1},	{468,1},	{457,2},
  {900,2},	{912,2}
};

static struct patval_a fuseki19612[] = {
  {455,1},	{530,1},	{468,1},	{457,2},
  {900,2},	{912,2}
};

static struct patval_a fuseki19613[] = {
  {468,1},	{949,1},	{910,1},	{456,2},
  {875,2},	{900,2}
};

static struct patval_a fuseki19614[] = {
  {458,1},	{456,1},	{469,1},	{529,2},
  {912,2},	{900,2}
};

static struct patval_a fuseki19615[] = {
  {455,1},	{468,1},	{466,1},	{900,2},
  {912,2},	{543,2}
};

static struct patval_a fuseki19616[] = {
  {458,1},	{456,1},	{469,1},	{529,2},
  {912,2},	{900,2}
};

static struct patval_a fuseki19617[] = {
  {456,1},	{469,1},	{900,2},	{913,2}
};

static struct patval_a fuseki19618[] = {
  {912,1},	{899,1},	{468,2},	{455,2}
};

static struct patval_a fuseki19619[] = {
  {455,1},	{468,1},	{899,2},	{912,2}
};

static struct patval_a fuseki19620[] = {
  {912,1},	{431,1},	{900,2},	{419,2}
};

static struct patval_a fuseki19621[] = {
  {912,1},	{899,1},	{468,2},	{455,2}
};

static struct patval_a fuseki19622[] = {
  {456,1},	{469,1},	{900,2},	{913,2}
};

static struct patval_a fuseki19623[] = {
  {418,1},	{468,2}
};

static struct patval_a fuseki19624[] = {
  {950,1},	{900,2}
};

static struct patval_a fuseki19625[] = {
  {418,1},	{900,2}
};

static struct patval_a fuseki19626[] = {
  {506,1},	{900,2}
};

static struct patval_a fuseki19627[] = {
  {430,1},	{900,2}
};

static struct patval_a fuseki19628[] = {
  {420,1},	{912,2}
};

static struct patval_a fuseki19629[] = {
  {430,1},	{900,2}
};

static struct patval_a fuseki19630[] = {
  {938,1},	{468,2}
};

static struct patval_a fuseki19631[] = {
  {506,1},	{900,2}
};

static struct patval_a fuseki19632[] = {
  {690,1},	{912,1},	{910,1},	{468,1},
  {947,2},	{456,2},	{937,2}
};

static struct patval_a fuseki19633[] = {
  {418,1},	{912,1},	{431,1},	{421,1},
  {900,2},	{423,2},	{678,2},	{456,2}
};

static struct patval_a fuseki19634[] = {
  {455,1},	{936,1},	{825,1},	{468,1},
  {751,2},	{906,2},	{900,2},	{912,2}
};

static struct patval_a fuseki19635[] = {
  {912,1},	{863,2}
};

static struct patval_a fuseki19636[] = {
  {912,1},	{863,2}
};

static struct patval_a fuseki19637[] = {
  {912,1},	{863,2}
};

static struct patval_a fuseki19638[] = {
  {456,1},	{901,2}
};

static struct patval_a fuseki19639[] = {
  {456,1},	{901,2}
};

static struct patval_a fuseki19640[] = {
  {912,1},	{900,1},	{906,1},	{838,1},
  {468,2},	{456,2},	{839,2}
};

static struct patval_a fuseki19641[] = {
  {493,1},	{468,1},	{900,2}
};

static struct patval_a fuseki19642[] = {
  {900,1},	{875,1},	{468,2}
};

static struct patval_a fuseki19643[] = {
  {912,1},	{863,1},	{456,2}
};

static struct patval_a fuseki19644[] = {
  {468,1},	{911,1},	{900,2}
};

static struct patval_a fuseki19645[] = {
  {900,1},	{875,1},	{468,2}
};

static struct patval_a fuseki19646[] = {
  {912,1},	{900,1},	{429,1},	{468,2},
  {455,2}
};

static struct patval_a fuseki19647[] = {
  {456,1},	{468,1},	{939,1},	{900,2},
  {913,2}
};

static struct patval_a fuseki19648[] = {
  {456,1},	{468,1},	{939,1},	{900,2},
  {913,2}
};

static struct patval_a fuseki19649[] = {
  {456,1},	{468,1},	{939,1},	{900,2},
  {913,2}
};

static struct patval_a fuseki19650[] = {
  {431,1},	{900,1},	{455,2}
};

static struct patval_a fuseki19651[] = {
  {900,1},	{469,1},	{949,2}
};

static struct patval_a fuseki19652[] = {
  {431,1},	{900,1},	{455,2}
};

static struct patval_a fuseki19653[] = {
  {900,1},	{469,1},	{949,2}
};

static struct patval_a fuseki19654[] = {
  {431,1},	{900,1},	{455,2}
};

static struct patval_a fuseki19655[] = {
  {529,1},	{912,1},	{531,1},	{900,1},
  {456,2},	{468,2},	{603,2}
};

static struct patval_a fuseki19656[] = {
  {543,1},	{900,1},	{541,1},	{912,1},
  {468,2},	{456,2},	{617,2}
};

static struct patval_a fuseki19657[] = {
  {939,1},	{900,2}
};

static struct patval_a fuseki19658[] = {
  {939,1},	{900,2}
};

static struct patval_a fuseki19659[] = {
  {939,1},	{900,2}
};

static struct patval_a fuseki19660[] = {
  {939,1},	{900,2}
};

static struct patval_a fuseki19661[] = {
  {825,1},	{900,2}
};

static struct patval_a fuseki19662[] = {
  {839,1},	{912,2}
};

static struct patval_a fuseki19663[] = {
  {468,1},	{900,1},	{492,2}
};

static struct patval_a fuseki19664[] = {
  {900,1},	{468,1},	{948,2}
};

static struct patval_a fuseki19665[] = {
  {468,1},	{900,1},	{492,2}
};

static struct patval_a fuseki19666[] = {
  {468,1},	{900,1},	{492,2}
};

static struct patval_a fuseki19667[] = {
  {456,1},	{912,1},	{938,2}
};

static struct patval_a fuseki19668[] = {
  {468,1},	{900,1},	{492,2}
};

static struct patval_a fuseki19669[] = {
  {900,1},	{468,1},	{876,2}
};

static struct patval_a fuseki19670[] = {
  {912,1},	{431,1},	{455,2}
};

static struct patval_a fuseki19671[] = {
  {419,1},	{900,1},	{469,2}
};

static struct patval_a fuseki19672[] = {
  {419,1},	{900,1},	{469,2}
};

static struct patval_a fuseki19673[] = {
  {455,1},	{468,1},	{460,1},	{457,2},
  {900,2},	{913,2}
};

static struct patval_a fuseki19674[] = {
  {764,1},	{949,1},	{468,1},	{419,2},
  {875,2},	{900,2}
};

static struct patval_a fuseki19675[] = {
  {764,1},	{949,1},	{468,1},	{419,2},
  {875,2},	{900,2}
};

static struct patval_a fuseki19676[] = {
  {456,1},	{801,1},	{468,1},	{944,2},
  {900,2},	{913,2}
};

static struct patval_a fuseki19677[] = {
  {456,1},	{801,1},	{468,1},	{944,2},
  {900,2},	{913,2}
};

static struct patval_a fuseki19678[] = {
  {456,1},	{801,1},	{468,1},	{944,2},
  {900,2},	{913,2}
};

static struct patval_a fuseki19679[] = {
  {468,1},	{937,1},	{456,2}
};

static struct patval_a fuseki19680[] = {
  {468,1},	{937,1},	{456,2}
};

static struct patval_a fuseki19681[] = {
  {468,1},	{937,1},	{456,2}
};

static struct patval_a fuseki19682[] = {
  {900,1},	{431,1},	{912,2}
};

static struct patval_a fuseki19683[] = {
  {899,1},	{468,1},	{912,2}
};

static struct patval_a fuseki19684[] = {
  {912,1},	{900,1},	{906,1},	{910,1},
  {468,2},	{456,2},	{839,2}
};

static struct patval_a fuseki19685[] = {
  {912,1},	{900,1},	{906,1},	{910,1},
  {468,2},	{456,2},	{839,2}
};

static struct patval_a fuseki19686[] = {
  {912,1},	{900,1},	{684,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19687[] = {
  {456,1},	{900,1},	{684,1},	{468,2},
  {912,2}
};

static struct patval_a fuseki19688[] = {
  {456,1},	{468,1},	{684,1},	{900,2},
  {912,2}
};

static struct patval_a fuseki19689[] = {
  {456,1},	{900,1},	{684,1},	{468,2},
  {912,2}
};

static struct patval_a fuseki19690[] = {
  {912,1},	{900,1},	{684,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19691[] = {
  {912,1},	{900,1},	{684,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19692[] = {
  {949,1},	{900,1},	{876,1},	{945,1},
  {468,2},	{456,2},	{943,2}
};

static struct patval_a fuseki19693[] = {
  {949,1},	{900,1},	{876,1},	{945,1},
  {468,2},	{456,2},	{943,2}
};

static struct patval_a fuseki19694[] = {
  {900,1},	{455,1},	{456,1},	{678,1},
  {423,1},	{421,2},	{418,2},	{431,2},
  {912,2}
};

static struct patval_a fuseki19695[] = {
  {913,1},	{900,1},	{492,2}
};

static struct patval_a fuseki19696[] = {
  {913,1},	{900,1},	{492,2}
};

static struct patval_a fuseki19697[] = {
  {419,1},	{900,1},	{948,2}
};

static struct patval_a fuseki19698[] = {
  {455,1},	{468,1},	{876,2}
};

static struct patval_a fuseki19699[] = {
  {913,1},	{900,1},	{492,2}
};

static struct patval_a fuseki19700[] = {
  {419,1},	{900,1},	{948,2}
};

static struct patval_a fuseki19701[] = {
  {913,1},	{900,1},	{492,2}
};

static struct patval_a fuseki19702[] = {
  {690,1},	{912,1},	{872,1},	{468,1},
  {910,1},	{947,2},	{909,2},	{456,2},
  {937,2}
};

static struct patval_a fuseki19703[] = {
  {690,1},	{912,1},	{872,1},	{468,1},
  {910,1},	{947,2},	{909,2},	{456,2},
  {937,2}
};

static struct patval_a fuseki19704[] = {
  {468,1},	{462,1},	{456,1},	{530,1},
  {568,1},	{567,2},	{899,2},	{529,2},
  {912,2}
};

static struct patval_a fuseki19705[] = {
  {455,1},	{432,1},	{912,2},	{900,2}
};

static struct patval_a fuseki19706[] = {
  {455,1},	{432,1},	{912,2},	{900,2}
};

static struct patval_a fuseki19707[] = {
  {418,1},	{469,1},	{912,2},	{900,2}
};

static struct patval_a fuseki19708[] = {
  {456,1},	{690,1},	{468,1},	{900,2},
  {912,2},	{543,2}
};

static struct patval_a fuseki19709[] = {
  {468,1},	{912,1},	{906,1},	{947,2},
  {456,2},	{900,2}
};

static struct patval_a fuseki19710[] = {
  {456,1},	{690,1},	{468,1},	{900,2},
  {912,2},	{543,2}
};

static struct patval_a fuseki19711[] = {
  {468,1},	{912,1},	{906,1},	{947,2},
  {456,2},	{900,2}
};

static struct patval_a fuseki19712[] = {
  {468,1},	{912,1},	{906,1},	{947,2},
  {456,2},	{900,2}
};

static struct patval_a fuseki19713[] = {
  {456,1},	{678,1},	{900,1},	{902,1},
  {866,1},	{939,2},	{903,2},	{468,2},
  {912,2}
};

static struct patval_a fuseki19714[] = {
  {912,1},	{900,1},	{906,1},	{800,1},
  {838,1},	{801,2},	{468,2},	{456,2},
  {839,2}
};

static struct patval_a fuseki19715[] = {
  {690,1},	{912,1},	{468,1},	{502,1},
  {466,1},	{429,2},	{465,2},	{456,2},
  {900,2}
};

static struct patval_a fuseki19716[] = {
  {456,1},	{678,1},	{900,1},	{902,1},
  {866,1},	{939,2},	{903,2},	{468,2},
  {912,2}
};

static struct patval_a fuseki19717[] = {
  {912,1},	{938,1},	{419,2},	{899,2}
};

static struct patval_a fuseki19718[] = {
  {862,1},	{456,1},	{937,2},	{913,2}
};

static struct patval_a fuseki19719[] = {
  {421,1},	{912,1},	{900,1},	{458,1},
  {457,1},	{455,2},	{420,2},	{468,2},
  {419,2}
};

static struct patval_a fuseki19720[] = {
  {456,1},	{938,2}
};

static struct patval_a fuseki19721[] = {
  {456,1},	{938,2}
};

static struct patval_a fuseki19722[] = {
  {912,1},	{862,2}
};

static struct patval_a fuseki19723[] = {
  {912,1},	{862,2}
};

static struct patval_a fuseki19724[] = {
  {913,1},	{900,1},	{505,1},	{431,2},
  {455,2}
};

static struct patval_a fuseki19725[] = {
  {419,1},	{900,1},	{467,1},	{949,2},
  {469,2}
};

static struct patval_a fuseki19726[] = {
  {913,1},	{900,1},	{505,1},	{431,2},
  {455,2}
};

static struct patval_a fuseki19727[] = {
  {419,1},	{900,1},	{467,1},	{949,2},
  {469,2}
};

static struct patval_a fuseki19728[] = {
  {913,1},	{900,1},	{505,1},	{431,2},
  {455,2}
};

static struct patval_a fuseki19729[] = {
  {455,1},	{468,1},	{422,1},	{457,2},
  {900,2},	{912,2}
};

static struct patval_a fuseki19730[] = {
  {949,1},	{802,1},	{468,1},	{875,2},
  {456,2},	{900,2}
};

static struct patval_a fuseki19731[] = {
  {456,1},	{914,1},	{839,1},	{468,1},
  {912,2},	{910,2},	{900,2}
};

static struct patval_a fuseki19732[] = {
  {898,1},	{825,1},	{456,1},	{468,1},
  {902,2},	{900,2},	{912,2}
};

static struct patval_a fuseki19733[] = {
  {543,1},	{900,1},	{470,1},	{912,1},
  {468,2},	{456,2},	{466,2}
};

static struct patval_a fuseki19734[] = {
  {454,1},	{529,1},	{912,1},	{900,1},
  {458,2},	{468,2},	{456,2}
};

static struct patval_a fuseki19735[] = {
  {456,1},	{900,1},	{947,1},	{986,1},
  {838,2},	{912,2},	{468,2}
};

static struct patval_a fuseki19736[] = {
  {456,1},	{431,1},	{900,2},	{913,2}
};

static struct patval_a fuseki19737[] = {
  {469,1},	{912,1},	{900,2},	{419,2}
};

static struct patval_a fuseki19738[] = {
  {456,1},	{431,1},	{900,2},	{913,2}
};

static struct patval_a fuseki19739[] = {
  {543,1},	{900,1},	{949,1},	{468,2},
  {455,2}
};

static struct patval_a fuseki19740[] = {
  {543,1},	{900,1},	{949,1},	{468,2},
  {455,2}
};

static struct patval_a fuseki19741[] = {
  {543,1},	{900,1},	{949,1},	{468,2},
  {455,2}
};

static struct patval_a fuseki19742[] = {
  {456,1},	{678,1},	{900,1},	{948,2},
  {468,2}
};

static struct patval_a fuseki19743[] = {
  {912,1},	{900,1},	{906,1},	{468,2},
  {492,2}
};

static struct patval_a fuseki19744[] = {
  {912,1},	{900,1},	{906,1},	{456,2},
  {506,2}
};

static struct patval_a fuseki19745[] = {
  {912,1},	{690,1},	{468,1},	{938,2},
  {456,2}
};

static struct patval_a fuseki19746[] = {
  {456,1},	{468,1},	{900,2},	{875,2}
};

static struct patval_a fuseki19747[] = {
  {912,1},	{900,1},	{468,2},	{493,2}
};

static struct patval_a fuseki19748[] = {
  {455,1},	{825,1},	{469,1},	{906,2},
  {912,2},	{900,2}
};

static struct patval_a fuseki19749[] = {
  {455,1},	{825,1},	{469,1},	{906,2},
  {912,2},	{900,2}
};

static struct patval_a fuseki19750[] = {
  {529,1},	{899,1},	{913,1},	{462,2},
  {468,2},	{456,2}
};

static struct patval_a fuseki19751[] = {
  {431,1},	{949,1},	{421,1},	{900,2},
  {456,2},	{678,2}
};

static struct patval_a fuseki19752[] = {
  {455,1},	{825,1},	{468,1},	{944,2},
  {900,2},	{913,2}
};

static struct patval_a fuseki19753[] = {
  {419,1},	{900,1},	{429,1},	{468,2},
  {949,2},	{728,2}
};

static struct patval_a fuseki19754[] = {
  {912,1},	{419,1},	{900,1},	{468,2},
  {492,2}
};

static struct patval_a fuseki19755[] = {
  {912,1},	{419,1},	{900,1},	{468,2},
  {492,2}
};

static struct patval_a fuseki19756[] = {
  {912,1},	{419,1},	{900,1},	{468,2},
  {492,2}
};

static struct patval_a fuseki19757[] = {
  {912,1},	{900,1},	{431,1},	{456,2},
  {506,2}
};

static struct patval_a fuseki19758[] = {
  {912,1},	{419,1},	{900,1},	{468,2},
  {492,2}
};

static struct patval_a fuseki19759[] = {
  {912,1},	{468,1},	{901,1},	{456,2},
  {899,2}
};

static struct patval_a fuseki19760[] = {
  {912,1},	{468,1},	{457,1},	{900,2},
  {455,2}
};

static struct patval_a fuseki19761[] = {
  {456,1},	{900,1},	{467,1},	{912,2},
  {469,2}
};

static struct patval_a fuseki19762[] = {
  {456,1},	{900,1},	{467,1},	{912,2},
  {469,2}
};

static struct patval_a fuseki19763[] = {
  {912,1},	{468,1},	{901,1},	{456,2},
  {899,2}
};

static struct patval_a fuseki19764[] = {
  {906,1},	{684,1},	{900,2}
};

static struct patval_a fuseki19765[] = {
  {906,1},	{684,1},	{900,2}
};

static struct patval_a fuseki19766[] = {
  {906,1},	{684,1},	{900,2}
};

static struct patval_a fuseki19767[] = {
  {684,1},	{906,1},	{912,2}
};

static struct patval_a fuseki19768[] = {
  {456,1},	{690,1},	{468,1},	{900,2},
  {543,2},	{913,2}
};

static struct patval_a fuseki19769[] = {
  {900,1},	{912,1},	{678,1},	{455,2},
  {468,2},	{825,2}
};

static struct patval_a fuseki19770[] = {
  {456,1},	{690,1},	{468,1},	{900,2},
  {543,2},	{913,2}
};

static struct patval_a fuseki19771[] = {
  {456,1},	{900,1},	{906,1},	{939,2},
  {468,2},	{949,2}
};

static struct patval_a fuseki19772[] = {
  {456,1},	{728,1},	{468,1},	{948,2},
  {900,2},	{913,2}
};

static struct patval_a fuseki19773[] = {
  {456,1},	{728,1},	{468,1},	{948,2},
  {900,2},	{913,2}
};

static struct patval_a fuseki19774[] = {
  {456,1},	{728,1},	{468,1},	{948,2},
  {900,2},	{913,2}
};

static struct patval_a fuseki19775[] = {
  {456,1},	{875,1},	{468,2},	{949,2}
};

static struct patval_a fuseki19776[] = {
  {912,1},	{493,1},	{900,2},	{419,2}
};

static struct patval_a fuseki19777[] = {
  {456,1},	{911,1},	{900,2},	{913,2}
};

static struct patval_a fuseki19778[] = {
  {456,1},	{911,1},	{900,2},	{913,2}
};

static struct patval_a fuseki19779[] = {
  {912,1},	{493,1},	{900,2},	{419,2}
};

static struct patval_a fuseki19780[] = {
  {456,1},	{911,1},	{900,2},	{913,2}
};

static struct patval_a fuseki19781[] = {
  {900,1},	{543,1},	{468,2}
};

static struct patval_a fuseki19782[] = {
  {900,1},	{543,1},	{468,2}
};

static struct patval_a fuseki19783[] = {
  {900,1},	{543,1},	{468,2}
};

static struct patval_a fuseki19784[] = {
  {900,1},	{543,1},	{468,2}
};

static struct patval_a fuseki19785[] = {
  {900,1},	{543,1},	{468,2}
};

static struct patval_a fuseki19786[] = {
  {900,1},	{543,1},	{468,2}
};

static struct patval_a fuseki19787[] = {
  {900,1},	{543,1},	{468,2}
};

static struct patval_a fuseki19788[] = {
  {913,1},	{862,1},	{937,1},	{468,2},
  {455,2}
};

static struct patval_a fuseki19789[] = {
  {913,1},	{862,1},	{937,1},	{468,2},
  {455,2}
};

static struct patval_a fuseki19790[] = {
  {913,1},	{862,1},	{937,1},	{468,2},
  {455,2}
};

static struct patval_a fuseki19791[] = {
  {529,1},	{912,1},	{678,1},	{900,1},
  {458,2},	{456,2},	{469,2}
};

static struct patval_a fuseki19792[] = {
  {468,1},	{912,1},	{906,1},	{939,1},
  {900,2},	{419,2},	{826,2}
};

static struct patval_a fuseki19793[] = {
  {900,1},	{684,1},	{468,2}
};

static struct patval_a fuseki19794[] = {
  {912,1},	{684,1},	{456,2}
};

static struct patval_a fuseki19795[] = {
  {654,1},	{900,1},	{543,1},	{470,1},
  {912,1},	{432,2},	{429,2},	{456,2},
  {468,2}
};

static struct patval_a fuseki19796[] = {
  {468,1},	{912,1},	{942,1},	{939,1},
  {974,1},	{900,2},	{456,2},	{825,2},
  {936,2}
};

static struct patval_a fuseki19797[] = {
  {654,1},	{900,1},	{543,1},	{470,1},
  {912,1},	{432,2},	{429,2},	{456,2},
  {468,2}
};

static struct patval_a fuseki19798[] = {
  {456,1},	{432,1},	{429,1},	{468,1},
  {912,2},	{900,2},	{543,2},	{470,2}
};

static struct patval_a fuseki19799[] = {
  {912,1},	{456,1},	{899,2},	{469,2}
};

static struct patval_a fuseki19800[] = {
  {912,1},	{456,1},	{899,2},	{469,2}
};

static struct patval_a fuseki19801[] = {
  {456,1},	{912,1},	{431,2},	{937,2}
};

static struct patval_a fuseki19802[] = {
  {899,1},	{876,1},	{949,1},	{938,1},
  {468,2},	{901,2},	{456,2}
};

static struct patval_a fuseki19803[] = {
  {862,1},	{913,1},	{937,1},	{948,1},
  {911,2},	{468,2},	{456,2}
};

static struct patval_a fuseki19804[] = {
  {456,1},	{505,1},	{431,2}
};

static struct patval_a fuseki19805[] = {
  {457,1},	{900,1},	{455,2}
};

static struct patval_a fuseki19806[] = {
  {900,1},	{875,1},	{949,2}
};

static struct patval_a fuseki19807[] = {
  {467,1},	{912,1},	{469,2}
};

static struct patval_a fuseki19808[] = {
  {455,1},	{913,2}
};

static struct patval_a fuseki19809[] = {
  {899,1},	{469,2}
};

static struct patval_a fuseki19810[] = {
  {469,1},	{899,2}
};

static struct patval_a fuseki19811[] = {
  {899,1},	{469,2}
};

static struct patval_a fuseki19812[] = {
  {456,1},	{433,1},	{469,1},	{542,1},
  {912,2},	{432,2},	{467,2},	{900,2}
};

static struct patval_a fuseki19813[] = {
  {912,1},	{900,1},	{467,1},	{431,1},
  {432,1},	{456,2},	{542,2},	{469,2},
  {433,2}
};

static struct patval_a fuseki19814[] = {
  {900,1},	{418,1},	{457,1},	{419,1},
  {912,1},	{417,2},	{455,2},	{468,2},
  {530,2}
};

static struct patval_a fuseki19815[] = {
  {899,1},	{419,1},	{469,1},	{912,2},
  {938,2}
};

static struct patval_a fuseki19816[] = {
  {913,1},	{431,1},	{937,1},	{456,2},
  {862,2}
};

static struct patval_a fuseki19817[] = {
  {913,1},	{431,1},	{937,1},	{456,2},
  {862,2}
};

static struct patval_a fuseki19818[] = {
  {913,1},	{431,1},	{937,1},	{456,2},
  {862,2}
};

static struct patval_a fuseki19819[] = {
  {432,1},	{900,1},	{467,1},	{912,1},
  {542,2},	{456,2},	{469,2}
};

static struct patval_a fuseki19820[] = {
  {468,1},	{912,1},	{906,1},	{939,1},
  {900,2},	{456,2},	{826,2}
};

static struct patval_a fuseki19821[] = {
  {468,1},	{912,1},	{906,1},	{939,1},
  {900,2},	{456,2},	{826,2}
};

static struct patval_a fuseki19822[] = {
  {468,1},	{912,1},	{462,1},	{421,1},
  {900,2},	{456,2},	{530,2}
};

static struct patval_a fuseki19823[] = {
  {468,1},	{912,1},	{906,1},	{939,1},
  {900,2},	{456,2},	{826,2}
};

static struct patval_a fuseki19824[] = {
  {948,1},	{938,1},	{456,2}
};

static struct patval_a fuseki19825[] = {
  {938,1},	{948,1},	{468,2}
};

static struct patval_a fuseki19826[] = {
  {468,1},	{456,1},	{641,1},	{900,2},
  {529,2},	{912,2}
};

static struct patval_a fuseki19827[] = {
  {456,1},	{653,1},	{468,1},	{900,2},
  {912,2},	{543,2}
};

static struct patval_a fuseki19828[] = {
  {456,1},	{653,1},	{468,1},	{900,2},
  {912,2},	{543,2}
};

static struct patval_a fuseki19829[] = {
  {912,1},	{900,1},	{684,2},	{456,2}
};

static struct patval_a fuseki19830[] = {
  {900,1},	{912,1},	{468,2},	{684,2}
};

static struct patval_a fuseki19831[] = {
  {912,1},	{468,1},	{684,2},	{900,2}
};

static struct patval_a fuseki19832[] = {
  {493,1},	{468,1},	{900,2},	{913,2}
};

static struct patval_a fuseki19833[] = {
  {875,1},	{900,1},	{468,2},	{455,2}
};

static struct patval_a fuseki19834[] = {
  {493,1},	{468,1},	{900,2},	{913,2}
};

static struct patval_a fuseki19835[] = {
  {455,1},	{913,1},	{468,2},	{900,2}
};

static struct patval_a fuseki19836[] = {
  {455,1},	{913,1},	{468,2},	{900,2}
};

static struct patval_a fuseki19837[] = {
  {913,1},	{900,1},	{429,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19838[] = {
  {419,1},	{900,1},	{543,1},	{912,2},
  {468,2}
};

static struct patval_a fuseki19839[] = {
  {900,1},	{457,1},	{912,2}
};

static struct patval_a fuseki19840[] = {
  {456,1},	{901,1},	{468,2}
};

static struct patval_a fuseki19841[] = {
  {912,1},	{467,1},	{900,2}
};

static struct patval_a fuseki19842[] = {
  {765,1},	{900,1},	{906,1},	{912,1},
  {468,2},	{455,2},	{839,2}
};

static struct patval_a fuseki19843[] = {
  {765,1},	{900,1},	{906,1},	{912,1},
  {468,2},	{455,2},	{839,2}
};

static struct patval_a fuseki19844[] = {
  {765,1},	{900,1},	{906,1},	{912,1},
  {468,2},	{455,2},	{839,2}
};

static struct patval_a fuseki19845[] = {
  {468,1},	{900,1},	{543,1},	{456,2},
  {912,2},	{429,2}
};

static struct patval_a fuseki19846[] = {
  {456,1},	{912,1},	{947,1},	{468,2},
  {900,2},	{839,2}
};

static struct patval_a fuseki19847[] = {
  {468,1},	{900,1},	{429,1},	{456,2},
  {912,2},	{543,2}
};

static struct patval_a fuseki19848[] = {
  {912,1},	{468,1},	{937,2},	{419,2}
};

static struct patval_a fuseki19849[] = {
  {456,1},	{900,1},	{431,2},	{949,2}
};

static struct patval_a fuseki19850[] = {
  {531,1},	{900,1},	{457,1},	{912,1},
  {460,2},	{468,2},	{455,2}
};

static struct patval_a fuseki19851[] = {
  {531,1},	{900,1},	{457,1},	{912,1},
  {460,2},	{468,2},	{455,2}
};

static struct patval_a fuseki19852[] = {
  {455,1},	{468,1},	{460,1},	{420,2},
  {900,2},	{912,2}
};

static struct patval_a fuseki19853[] = {
  {900,1},	{419,1},	{604,1},	{492,2},
  {468,2},	{912,2}
};

static struct patval_a fuseki19854[] = {
  {455,1},	{468,1},	{460,1},	{420,2},
  {900,2},	{912,2}
};

static struct patval_a fuseki19855[] = {
  {455,1},	{468,1},	{429,1},	{900,2},
  {543,2},	{913,2}
};

static struct patval_a fuseki19856[] = {
  {455,1},	{468,1},	{429,1},	{900,2},
  {543,2},	{913,2}
};

static struct patval_a fuseki19857[] = {
  {455,1},	{468,1},	{429,1},	{900,2},
  {543,2},	{913,2}
};

static struct patval_a fuseki19858[] = {
  {456,1},	{468,1},	{429,1},	{947,1},
  {900,2},	{690,2},	{543,2},	{913,2}
};

static struct patval_a fuseki19859[] = {
  {456,1},	{468,1},	{429,1},	{947,1},
  {900,2},	{690,2},	{543,2},	{913,2}
};

static struct patval_a fuseki19860[] = {
  {455,1},	{430,1},	{900,2},	{912,2}
};

static struct patval_a fuseki19861[] = {
  {455,1},	{430,1},	{900,2},	{912,2}
};

static struct patval_a fuseki19862[] = {
  {455,1},	{430,1},	{900,2},	{912,2}
};

static struct patval_a fuseki19863[] = {
  {455,1},	{430,1},	{900,2},	{912,2}
};

static struct patval_a fuseki19864[] = {
  {912,1},	{900,1},	{906,1},	{431,2},
  {455,2}
};

static struct patval_a fuseki19865[] = {
  {456,1},	{678,1},	{900,1},	{949,2},
  {469,2}
};

static struct patval_a fuseki19866[] = {
  {456,1},	{468,1},	{462,1},	{937,2},
  {913,2}
};

static struct patval_a fuseki19867[] = {
  {912,1},	{690,1},	{468,1},	{937,2},
  {455,2}
};

static struct patval_a fuseki19868[] = {
  {900,1},	{912,1},	{684,2}
};

static struct patval_a fuseki19869[] = {
  {456,1},	{468,1},	{684,2}
};

static struct patval_a fuseki19870[] = {
  {456,1},	{900,1},	{684,2}
};

static struct patval_a fuseki19871[] = {
  {900,1},	{912,1},	{684,2}
};

static struct patval_a fuseki19872[] = {
  {900,1},	{912,1},	{684,2}
};

static struct patval_a fuseki19873[] = {
  {912,1},	{468,1},	{684,2}
};

static struct patval_a fuseki19874[] = {
  {455,1},	{825,1},	{468,1},	{907,2},
  {900,2},	{913,2}
};

static struct patval_a fuseki19875[] = {
  {455,1},	{825,1},	{468,1},	{907,2},
  {900,2},	{913,2}
};

static struct patval_a fuseki19876[] = {
  {455,1},	{825,1},	{468,1},	{907,2},
  {900,2},	{913,2}
};

static struct patval_a fuseki19877[] = {
  {456,1},	{839,1},	{690,1},	{468,1},
  {910,2},	{906,2},	{912,2},	{900,2}
};

static struct patval_a fuseki19878[] = {
  {456,1},	{900,1},	{906,1},	{947,1},
  {468,2},	{690,2},	{838,2},	{912,2}
};

static struct patval_a fuseki19879[] = {
  {468,1},	{912,1},	{462,1},	{421,1},
  {900,2},	{678,2},	{456,2},	{530,2}
};

static struct patval_a fuseki19880[] = {
  {543,1},	{900,1},	{913,1},	{432,1},
  {456,2},	{617,2},	{468,2}
};

static struct patval_a fuseki19881[] = {
  {419,1},	{900,1},	{432,1},	{429,1},
  {468,2},	{912,2},	{427,2}
};

static struct patval_a fuseki19882[] = {
  {456,1},	{468,1},	{939,1},	{943,1},
  {945,2},	{900,2},	{949,2},	{876,2}
};

static struct patval_a fuseki19883[] = {
  {456,1},	{468,1},	{939,1},	{943,1},
  {945,2},	{900,2},	{949,2},	{876,2}
};

static struct patval_a fuseki19884[] = {
  {456,1},	{900,1},	{691,1},	{543,1},
  {468,2},	{948,2},	{765,2},	{913,2}
};

static struct patval_a fuseki19885[] = {
  {944,1},	{913,1},	{900,1},	{902,1},
  {825,2},	{468,2},	{456,2}
};

static struct patval_a fuseki19886[] = {
  {640,1},	{419,1},	{826,1},	{900,1},
  {939,2},	{468,2},	{912,2}
};

static struct patval_a fuseki19887[] = {
  {944,1},	{913,1},	{900,1},	{902,1},
  {825,2},	{468,2},	{456,2}
};

static struct patval_a fuseki19888[] = {
  {876,1},	{468,1},	{949,2},	{900,2}
};

static struct patval_a fuseki19889[] = {
  {876,1},	{468,1},	{949,2},	{900,2}
};

static struct patval_a fuseki19890[] = {
  {876,1},	{468,1},	{949,2},	{900,2}
};

static struct patval_a fuseki19891[] = {
  {876,1},	{468,1},	{949,2},	{900,2}
};

static struct patval_a fuseki19892[] = {
  {911,1},	{900,1},	{907,1},	{913,1},
  {468,2},	{801,2},	{456,2}
};

static struct patval_a fuseki19893[] = {
  {456,1},	{468,1},	{901,2},	{875,2}
};

static struct patval_a fuseki19894[] = {
  {912,1},	{468,1},	{457,2},	{863,2}
};

static struct patval_a fuseki19895[] = {
  {906,1},	{912,1},	{900,1},	{902,1},
  {455,2},	{468,2},	{825,2}
};

static struct patval_a fuseki19896[] = {
  {906,1},	{912,1},	{900,1},	{902,1},
  {455,2},	{468,2},	{825,2}
};

static struct patval_a fuseki19897[] = {
  {456,1},	{678,1},	{900,1},	{462,1},
  {468,2},	{690,2},	{912,2}
};

static struct patval_a fuseki19898[] = {
  {456,1},	{678,1},	{900,1},	{906,1},
  {468,2},	{690,2},	{912,2}
};

static struct patval_a fuseki19899[] = {
  {456,1},	{690,1},	{801,1},	{468,1},
  {911,2},	{900,2},	{907,2},	{913,2}
};

static struct patval_a fuseki19900[] = {
  {456,1},	{690,1},	{801,1},	{468,1},
  {911,2},	{900,2},	{907,2},	{913,2}
};

static struct patval_a fuseki19901[] = {
  {457,1},	{567,1},	{900,1},	{913,1},
  {460,2},	{468,2},	{455,2}
};

static struct patval_a fuseki19902[] = {
  {456,1},	{839,1},	{468,1},	{837,1},
  {906,2},	{912,2},	{765,2},	{900,2}
};

static struct patval_a fuseki19903[] = {
  {456,1},	{468,1},	{943,1},	{900,2},
  {949,2},	{728,2}
};

static struct patval_a fuseki19904[] = {
  {468,1},	{677,1},	{912,1},	{424,2},
  {455,2},	{900,2}
};

static struct patval_a fuseki19905[] = {
  {456,1},	{468,1},	{943,1},	{900,2},
  {949,2},	{728,2}
};

static struct patval_a fuseki19906[] = {
  {939,1},	{456,1},	{900,1},	{825,2},
  {468,2},	{912,2}
};

static struct patval_a fuseki19907[] = {
  {825,1},	{912,1},	{900,1},	{939,2},
  {468,2},	{456,2}
};

static struct patval_a fuseki19908[] = {
  {455,1},	{912,1},	{469,2}
};

static struct patval_a fuseki19909[] = {
  {899,1},	{468,1},	{913,2}
};

static struct patval_a fuseki19910[] = {
  {469,1},	{900,1},	{455,2}
};

static struct patval_a fuseki19911[] = {
  {900,1},	{431,1},	{949,2}
};

static struct patval_a fuseki19912[] = {
  {456,1},	{530,1},	{900,1},	{423,1},
  {495,2},	{421,2},	{468,2},	{912,2}
};

static struct patval_a fuseki19913[] = {
  {468,1},	{603,1},	{456,1},	{458,1},
  {531,2},	{900,2},	{529,2},	{912,2}
};

static struct patval_a fuseki19914[] = {
  {838,1},	{912,1},	{945,1},	{468,1},
  {947,2},	{873,2},	{456,2},	{900,2}
};

static struct patval_a fuseki19915[] = {
  {455,1},	{543,1},	{468,1},	{429,2},
  {912,2},	{900,2}
};

static struct patval_a fuseki19916[] = {
  {913,1},	{900,1},	{543,1},	{468,2},
  {492,2}
};

static struct patval_a fuseki19917[] = {
  {913,1},	{900,1},	{543,1},	{468,2},
  {492,2}
};

static struct patval_a fuseki19918[] = {
  {913,1},	{900,1},	{543,1},	{468,2},
  {492,2}
};

static struct patval_a fuseki19919[] = {
  {455,1},	{460,1},	{468,1},	{494,1},
  {457,2},	{567,2},	{900,2},	{913,2}
};

static struct patval_a fuseki19920[] = {
  {944,1},	{913,1},	{900,1},	{902,1},
  {455,2},	{468,2},	{825,2}
};

static struct patval_a fuseki19921[] = {
  {455,1},	{468,1},	{424,1},	{466,1},
  {900,2},	{543,2},	{913,2}
};

static struct patval_a fuseki19922[] = {
  {495,1},	{567,1},	{900,1},	{457,1},
  {913,1},	{455,2},	{460,2},	{468,2},
  {494,2}
};

static struct patval_a fuseki19923[] = {
  {911,1},	{467,1},	{900,2},	{456,2}
};

static struct patval_a fuseki19924[] = {
  {911,1},	{467,1},	{900,2},	{456,2}
};

static struct patval_a fuseki19925[] = {
  {493,1},	{505,1},	{900,2},	{912,2}
};

static struct patval_a fuseki19926[] = {
  {455,1},	{752,1},	{825,1},	{468,1},
  {751,2},	{906,2},	{900,2},	{912,2}
};

static struct patval_a fuseki19927[] = {
  {468,1},	{900,1},	{911,1},	{456,2},
  {913,2}
};

static struct patval_a fuseki19928[] = {
  {875,1},	{900,1},	{468,1},	{456,2},
  {949,2}
};

static struct patval_a fuseki19929[] = {
  {468,1},	{900,1},	{457,1},	{455,2},
  {912,2}
};

static struct patval_a fuseki19930[] = {
  {875,1},	{900,1},	{468,1},	{456,2},
  {949,2}
};

static struct patval_a fuseki19931[] = {
  {456,1},	{900,1},	{947,1},	{430,2},
  {912,2}
};

static struct patval_a fuseki19932[] = {
  {543,1},	{900,1},	{912,1},	{468,2},
  {492,2}
};

static struct patval_a fuseki19933[] = {
  {912,1},	{468,1},	{421,1},	{938,2},
  {456,2}
};

static struct patval_a fuseki19934[] = {
  {543,1},	{900,1},	{912,1},	{468,2},
  {492,2}
};

static struct patval_a fuseki19935[] = {
  {912,1},	{468,1},	{421,1},	{938,2},
  {456,2}
};

static struct patval_a fuseki19936[] = {
  {912,1},	{900,1},	{543,1},	{690,1},
  {468,2},	{455,2},	{429,2}
};

static struct patval_a fuseki19937[] = {
  {912,1},	{900,1},	{543,1},	{690,1},
  {468,2},	{455,2},	{429,2}
};

static struct patval_a fuseki19938[] = {
  {432,1},	{900,1},	{431,1},	{913,1},
  {543,1},	{469,2},	{456,2},	{617,2},
  {468,2}
};

static struct patval_a fuseki19939[] = {
  {456,1},	{900,1},	{949,1},	{875,2},
  {468,2}
};

static struct patval_a fuseki19940[] = {
  {456,1},	{900,1},	{949,1},	{875,2},
  {468,2}
};

static struct patval_a fuseki19941[] = {
  {456,1},	{900,1},	{949,1},	{875,2},
  {468,2}
};

static struct patval_a fuseki19942[] = {
  {455,1},	{468,1},	{466,1},	{900,2},
  {543,2},	{913,2}
};

static struct patval_a fuseki19943[] = {
  {542,1},	{949,1},	{468,1},	{429,2},
  {419,2},	{900,2}
};

static struct patval_a fuseki19944[] = {
  {937,1},	{420,1},	{468,2}
};

static struct patval_a fuseki19945[] = {
  {899,1},	{876,1},	{468,2}
};

static struct patval_a fuseki19946[] = {
  {912,1},	{900,1},	{429,1},	{394,1},
  {468,2},	{455,2},	{543,2}
};

static struct patval_a fuseki19947[] = {
  {641,1},	{456,1},	{469,1},	{529,2},
  {912,2},	{900,2}
};

static struct patval_a fuseki19948[] = {
  {456,1},	{937,1},	{461,1},	{421,2},
  {468,2},	{912,2}
};

static struct patval_a fuseki19949[] = {
  {455,1},	{653,1},	{468,1},	{900,2},
  {912,2},	{543,2}
};

static struct patval_a fuseki19950[] = {
  {876,1},	{900,1},	{543,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19951[] = {
  {876,1},	{900,1},	{543,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19952[] = {
  {876,1},	{900,1},	{543,1},	{468,2},
  {456,2}
};

static struct patval_a fuseki19953[] = {
  {900,1},	{420,1},	{429,1},	{468,2},
  {912,2}
};

static struct patval_a fuseki19954[] = {
  {419,1},	{468,1},	{900,2},	{913,2}
};

static struct patval_a fuseki19955[] = {
  {913,1},	{468,1},	{900,2},	{419,2}
};

static struct patval_a fuseki19956[] = {
  {899,1},	{456,1},	{431,2},	{912,2}
};

static struct patval_a fuseki19957[] = {
  {542,1},	{493,1},	{468,1},	{912,1},
  {429,2},	{900,2},	{419,2},	{462,2}
};

static struct patval_a fuseki19958[] = {
  {838,1},	{863,1},	{468,1},	{912,1},
  {947,2},	{937,2},	{456,2},	{906,2}
};

static struct patval_a fuseki19959[] = {
  {911,1},	{900,1},	{944,1},	{913,1},
  {468,2},	{801,2},	{456,2}
};

static struct patval_a fuseki19960[] = {
  {455,1},	{616,1},	{431,1},	{505,2},
  {900,2},	{912,2}
};

static struct patval_a fuseki19961[] = {
  {455,1},	{616,1},	{431,1},	{505,2},
  {900,2},	{912,2}
};

static struct patval_a fuseki19962[] = {
  {455,1},	{616,1},	{431,1},	{505,2},
  {900,2},	{912,2}
};

static struct patval_a fuseki19963[] = {
  {949,1},	{431,1},	{900,2},	{455,2}
};

static struct patval_a fuseki19964[] = {
  {949,1},	{431,1},	{900,2},	{455,2}
};

static struct patval_a fuseki19965[] = {
  {912,1},	{684,1},	{900,2}
};

static struct patval_a fuseki19966[] = {
  {684,1},	{468,1},	{912,2}
};

static struct patval_a fuseki19967[] = {
  {456,1},	{684,1},	{900,2}
};

static struct patval_a fuseki19968[] = {
  {457,1},	{492,1},	{900,1},	{912,1},
  {460,2},	{468,2},	{455,2}
};

static struct patval_a fuseki19969[] = {
  {457,1},	{492,1},	{900,1},	{912,1},
  {460,2},	{468,2},	{455,2}
};

static struct patval_a fuseki19970[] = {
  {456,1},	{900,1},	{430,1},	{505,1},
  {431,2},	{616,2},	{912,2}
};

static struct patval_a fuseki19971[] = {
  {900,1},	{751,1},	{906,1},	{715,1},
  {912,1},	{455,2},	{825,2},	{468,2},
  {752,2}
};

static struct patval_a fuseki19972[] = {
  {863,1},	{937,2}
};

static struct patval_a fuseki19973[] = {
  {765,1},	{900,1},	{906,1},	{910,1},
  {912,1},	{468,2},	{837,2},	{456,2},
  {839,2}
};

static struct patval_a fuseki19974[] = {
  {468,1},	{456,1},	{939,1},	{421,1},
  {900,2},	{678,2},	{529,2},	{912,2}
};

static struct patval_a fuseki19975[] = {
  {456,1},	{468,1},	{429,1},	{947,1},
  {900,2},	{690,2},	{912,2},	{543,2}
};

static struct patval_a fuseki19976[] = {
  {825,1},	{456,1},	{900,1},	{839,1},
  {906,2},	{468,2},	{912,2},	{939,2}
};

static struct patval_a fuseki19977[] = {
  {876,1},	{900,1},	{468,1},	{949,2},
  {456,2}
};

static struct patval_a fuseki19978[] = {
  {876,1},	{900,1},	{468,1},	{949,2},
  {456,2}
};

static struct patval_a fuseki19979[] = {
  {468,1},	{900,1},	{420,1},	{455,2},
  {912,2}
};

static struct patval_a fuseki19980[] = {
  {492,1},	{468,1},	{900,1},	{419,2},
  {912,2}
};

static struct patval_a fuseki19981[] = {
  {456,1},	{469,1},	{468,1},	{617,1},
  {900,2},	{543,2},	{432,2},	{913,2}
};

static struct patval_a fuseki19982[] = {
  {543,1},	{900,1},	{541,1},	{913,1},
  {456,2},	{617,2},	{468,2}
};

static struct patval_a fuseki19983[] = {
  {456,1},	{678,1},	{900,1},	{906,1},
  {421,2},	{468,2},	{912,2}
};

static struct patval_a fuseki19984[] = {
  {900,1},	{468,1}
};

static struct patval_a fuseki19985[] = {
  {900,1},	{468,1}
};

static struct patval_a fuseki19986[] = {
  {900,1},	{468,1}
};

static struct patval_a fuseki19987[] = {
  {900,1},	{468,1}
};

static struct patval_a fuseki19988[] = {
  {900,1},	{468,1}
};

static struct patval_a fuseki19989[] = {
  {900,1},	{468,1}
};

static struct patval_a fuseki19990[] = {
  {900,1},	{468,1}
};

static struct patval_a fuseki19991[] = {
  {900,1},	{468,1}
};

static struct patval_a fuseki19992[] = {
  {456,1},	{900,1},	{468,1}
};

static struct patval_a fuseki19993[] = {
  {456,1},	{900,1},	{468,1}
};

static struct patval_a fuseki19994[] = {
  {456,1},	{900,1},	{468,1}
};

static struct patval_a fuseki19995[] = {
  {456,1},	{900,1},	{468,1}
};

static struct patval_a fuseki19996[] = {
  {456,1},	{900,1},	{468,1}
};

static struct patval_a fuseki19997[] = {
  {456,1},	{900,1},	{468,1}
};

static struct patval_a fuseki19998[] = {
  {456,1},	{900,1},	{468,1}
};

static struct patval_a fuseki19999[] = {
  {456,1},	{900,1},	{468,1}
};

static struct patval_a fuseki191000[] = {
  {456,1},	{900,1},	{468,1}
};

static struct patval_a fuseki191001[] = {
  {912,1},	{468,2},	{900,2}
};

static struct patval_a fuseki191002[] = {
  {912,1},	{468,2},	{900,2}
};

static struct patval_a fuseki191003[] = {
  {912,1},	{468,2},	{900,2}
};

static struct patval_a fuseki191004[] = {
  {912,1},	{468,2},	{900,2}
};

static struct patval_a fuseki191005[] = {
  {456,1},	{900,2},	{468,2}
};

static struct patval_a fuseki191006[] = {
  {912,1},	{468,2},	{900,2}
};

static struct patval_a fuseki191007[] = {
  {456,1},	{900,2},	{468,2}
};

static struct patval_a fuseki191008[] = {
  {456,1},	{900,1},	{468,1},	{912,1}
};

static struct patval_a fuseki191009[] = {
  {456,1},	{900,1},	{468,1},	{912,1}
};

static struct patval_a fuseki191010[] = {
  {456,1},	{900,1},	{468,1},	{912,1}
};

static struct patval_a fuseki191011[] = {
  {456,1},	{900,1},	{468,1},	{912,1}
};

static struct patval_a fuseki191012[] = {
  {456,1},	{900,1},	{468,1},	{912,1}
};

static struct patval_a fuseki191013[] = {
  {456,1},	{900,1},	{468,1},	{912,1}
};

static struct patval_a fuseki191014[] = {
  {456,1},	{900,1},	{468,1},	{912,1}
};

static struct patval_a fuseki191015[] = {
  {913,1},	{468,2},	{900,2}
};

static struct patval_a fuseki191016[] = {
  {455,1},	{900,2},	{468,2}
};

static struct patval_a fuseki191017[] = {
  {455,1},	{900,2},	{468,2}
};

static struct patval_a fuseki191018[] = {
  {913,1},	{468,2},	{900,2}
};

static struct patval_a fuseki191019[] = {
  {949,1},	{468,2},	{900,2}
};

static struct patval_a fuseki191020[] = {
  {455,1},	{900,2},	{468,2}
};

static struct patval_a fuseki191021[] = {
  {949,1},	{468,2},	{900,2}
};

static struct patval_a fuseki191022[] = {
  {913,1},	{468,2},	{900,2}
};

static struct patval_a fuseki191023[] = {
  {949,1},	{468,2},	{900,2}
};

static struct patval_a fuseki191024[] = {
  {913,1},	{468,2},	{900,2}
};

static struct patval_a fuseki191025[] = {
  {913,1},	{468,2},	{900,2}
};

static struct patval_a fuseki191026[] = {
  {543,1},	{900,2},	{468,2},	{912,2},
  {456,2}
};

static struct patval_a fuseki191027[] = {
  {939,1},	{900,2},	{456,2},	{468,2},
  {912,2}
};

static struct patval_a fuseki191028[] = {
  {939,1},	{900,2},	{456,2},	{468,2},
  {912,2}
};

static struct patval_a fuseki191029[] = {
  {939,1},	{900,2},	{456,2},	{468,2},
  {912,2}
};

static struct patval_a fuseki191030[] = {
  {939,1},	{900,2},	{456,2},	{468,2},
  {912,2}
};

static struct patval_a fuseki191031[] = {
  {421,1},	{900,2},	{456,2},	{468,2},
  {912,2}
};

static struct patval_a fuseki191032[] = {
  {939,1},	{900,2},	{456,2},	{468,2},
  {912,2}
};

static struct patval_a fuseki191033[] = {
  {543,1},	{900,2},	{468,2},	{912,2},
  {456,2}
};

static struct patval_a fuseki191034[] = {
  {939,1},	{900,2},	{456,2},	{468,2},
  {912,2}
};

static struct patval_a fuseki191035[] = {
  {429,1},	{900,2},	{456,2},	{468,2},
  {912,2}
};

static struct patval_a fuseki191036[] = {
  {421,1},	{900,2},	{456,2},	{468,2},
  {912,2}
};

static struct patval_a fuseki191037[] = {
  {421,1},	{900,2},	{456,2},	{468,2},
  {912,2}
};

static struct patval_a fuseki191038[] = {
  {939,1},	{900,2},	{456,2},	{468,2},
  {912,2}
};

static struct patval_a fuseki191039[] = {
  {456,1},	{900,1},	{468,1},	{912,2}
};

static struct patval_a fuseki191040[] = {
  {456,1},	{900,1},	{468,1},	{912,2}
};

static struct patval_a fuseki191041[] = {
  {456,1},	{900,1},	{468,1},	{912,2}
};

static struct patval_a fuseki191042[] = {
  {456,1},	{900,1},	{468,1},	{912,2}
};

static struct patval_a fuseki191043[] = {
  {912,1},	{900,1},	{468,1},	{456,2}
};

static struct patval_a fuseki191044[] = {
  {912,1},	{900,2},	{468,2},	{456,2}
};

static struct patval_a fuseki191045[] = {
  {912,1},	{900,2},	{468,2},	{456,2}
};

static struct patval_a fuseki191046[] = {
  {912,1},	{900,2},	{468,2},	{456,2}
};

static struct patval_a fuseki191047[] = {
  {912,1},	{900,2},	{468,2},	{456,2}
};

static struct patval_a fuseki191048[] = {
  {912,1},	{900,2},	{468,2},	{456,2}
};

static struct patval_a fuseki191049[] = {
  {912,1},	{900,2},	{468,2},	{456,2}
};

static struct patval_a fuseki191050[] = {
  {912,1},	{900,2},	{468,2},	{456,2}
};

static struct patval_a fuseki191051[] = {
  {912,1},	{900,2},	{468,2},	{456,2}
};

static struct patval_a fuseki191052[] = {
  {912,1},	{900,2},	{468,2},	{456,2}
};

static struct patval_a fuseki191053[] = {
  {456,1},	{900,1},	{684,1},	{468,1},
  {912,1}
};

static struct patval_a fuseki191054[] = {
  {456,1},	{900,1},	{684,1},	{468,1},
  {912,1}
};

static struct patval_a fuseki191055[] = {
  {456,1},	{900,1},	{684,1},	{468,1},
  {912,1}
};

static struct patval_a fuseki191056[] = {
  {456,1},	{900,1},	{684,1},	{468,1},
  {912,1}
};

static struct patval_a fuseki191057[] = {
  {456,1},	{900,1},	{684,1},	{468,1},
  {912,1}
};

static struct patval_a fuseki191058[] = {
  {456,1},	{900,1},	{684,1},	{468,1},
  {912,1}
};

static struct patval_a fuseki191059[] = {
  {949,1},	{900,2},	{468,2},	{456,2}
};

static struct patval_a fuseki191060[] = {
  {949,1},	{900,2},	{468,2},	{456,2}
};

static struct patval_a fuseki191061[] = {
  {949,1},	{900,2},	{468,2},	{456,2}
};

static struct patval_a fuseki191062[] = {
  {913,1},	{900,2},	{468,2},	{456,2}
};

static struct patval_a fuseki191063[] = {
  {913,1},	{900,2},	{468,2},	{456,2}
};

static struct patval_a fuseki191064[] = {
  {913,1},	{900,2},	{468,2},	{456,2}
};

static struct patval_a fuseki191065[] = {
  {913,1},	{900,2},	{468,2},	{456,2}
};

static struct patval_a fuseki191066[] = {
  {529,1},	{456,2},	{900,2},	{684,2},
  {468,2},	{912,2}
};

static struct patval_a fuseki191067[] = {
  {939,1},	{900,2},	{456,2},	{684,2},
  {468,2},	{912,2}
};

static struct patval_a fuseki191068[] = {
  {529,1},	{456,2},	{900,2},	{684,2},
  {468,2},	{912,2}
};

static struct patval_a fuseki191069[] = {
  {939,1},	{900,2},	{456,2},	{684,2},
  {468,2},	{912,2}
};

static struct patval_a fuseki191070[] = {
  {839,1},	{456,2},	{684,2},	{468,2},
  {912,2},	{900,2}
};

static struct patval_a fuseki191071[] = {
  {939,1},	{900,2},	{456,2},	{684,2},
  {468,2},	{912,2}
};

static struct patval_a fuseki191072[] = {
  {825,1},	{456,2},	{900,2},	{684,2},
  {468,2},	{912,2}
};

static struct patval_a fuseki191073[] = {
  {825,1},	{456,2},	{900,2},	{684,2},
  {468,2},	{912,2}
};

static struct patval_a fuseki191074[] = {
  {456,1},	{900,1},	{468,1},	{913,2}
};

static struct patval_a fuseki191075[] = {
  {456,1},	{900,1},	{468,1},	{949,2}
};

static struct patval_a fuseki191076[] = {
  {456,1},	{900,1},	{468,1},	{913,2}
};

static struct patval_a fuseki191077[] = {
  {456,1},	{900,1},	{468,1},	{913,2}
};

static struct patval_a fuseki191078[] = {
  {456,1},	{900,1},	{468,1},	{913,2}
};

static struct patval_a fuseki191079[] = {
  {456,1},	{900,1},	{468,1},	{913,2}
};

static struct patval_a fuseki191080[] = {
  {456,1},	{900,1},	{468,1},	{949,2}
};

static struct patval_a fuseki191081[] = {
  {456,1},	{900,1},	{468,1},	{839,1},
  {912,2}
};

static struct patval_a fuseki191082[] = {
  {456,1},	{900,1},	{947,1},	{468,1},
  {912,2}
};

static struct patval_a fuseki191083[] = {
  {456,1},	{900,1},	{947,1},	{468,1},
  {912,2}
};

static struct patval_a fuseki191084[] = {
  {456,1},	{900,1},	{468,1},	{839,1},
  {912,2}
};

static struct patval_a fuseki191085[] = {
  {456,1},	{900,1},	{468,1},	{839,1},
  {912,2}
};

static struct patval_a fuseki191086[] = {
  {456,1},	{900,1},	{468,1},	{839,1},
  {912,2}
};

static struct patval_a fuseki191087[] = {
  {456,1},	{900,1},	{947,1},	{468,1},
  {912,2}
};

static struct patval_a fuseki191088[] = {
  {456,1},	{900,1},	{468,1},	{839,1},
  {912,2}
};

static struct patval_a fuseki191089[] = {
  {456,1},	{900,1},	{468,1},	{839,1},
  {912,2}
};

static struct patval_a fuseki191090[] = {
  {456,1},	{900,1},	{947,1},	{468,1},
  {912,2}
};

static struct patval_a fuseki191091[] = {
  {456,1},	{900,1},	{468,1},	{839,1},
  {912,2}
};

static struct patval_a fuseki191092[] = {
  {456,1},	{900,1},	{947,1},	{468,1},
  {912,2}
};

static struct patval_a fuseki191093[] = {
  {456,1},	{900,1},	{947,1},	{468,1},
  {912,2}
};

static struct patval_a fuseki191094[] = {
  {456,1},	{900,1},	{947,1},	{468,1},
  {912,2}
};

static struct patval_a fuseki191095[] = {
  {543,1},	{912,1},	{468,2},	{900,2},
  {456,2}
};

static struct patval_a fuseki191096[] = {
  {912,1},	{939,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191097[] = {
  {543,1},	{912,1},	{468,2},	{900,2},
  {456,2}
};

static struct patval_a fuseki191098[] = {
  {543,1},	{912,1},	{468,2},	{900,2},
  {456,2}
};

static struct patval_a fuseki191099[] = {
  {912,1},	{939,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191100[] = {
  {543,1},	{912,1},	{468,2},	{900,2},
  {456,2}
};

static struct patval_a fuseki191101[] = {
  {543,1},	{912,1},	{468,2},	{900,2},
  {456,2}
};

static struct patval_a fuseki191102[] = {
  {912,1},	{939,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191103[] = {
  {456,1},	{429,1},	{900,2},	{468,2},
  {912,2}
};

static struct patval_a fuseki191104[] = {
  {912,1},	{939,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191105[] = {
  {419,1},	{900,1},	{468,1},	{912,2}
};

static struct patval_a fuseki191106[] = {
  {949,1},	{900,1},	{468,1},	{456,2}
};

static struct patval_a fuseki191107[] = {
  {419,1},	{900,1},	{468,1},	{912,2}
};

static struct patval_a fuseki191108[] = {
  {455,1},	{900,1},	{468,1},	{912,2}
};

static struct patval_a fuseki191109[] = {
  {455,1},	{900,1},	{468,1},	{912,2}
};

static struct patval_a fuseki191110[] = {
  {419,1},	{900,1},	{468,1},	{912,2}
};

static struct patval_a fuseki191111[] = {
  {419,1},	{900,1},	{468,1},	{912,2}
};

static struct patval_a fuseki191112[] = {
  {875,1},	{468,2},	{900,2}
};

static struct patval_a fuseki191113[] = {
  {875,1},	{468,2},	{900,2}
};

static struct patval_a fuseki191114[] = {
  {911,1},	{900,2},	{468,2}
};

static struct patval_a fuseki191115[] = {
  {493,1},	{900,2},	{468,2}
};

static struct patval_a fuseki191116[] = {
  {911,1},	{900,2},	{468,2}
};

static struct patval_a fuseki191117[] = {
  {911,1},	{900,2},	{468,2}
};

static struct patval_a fuseki191118[] = {
  {911,1},	{900,2},	{468,2}
};

static struct patval_a fuseki191119[] = {
  {911,1},	{900,2},	{468,2}
};

static struct patval_a fuseki191120[] = {
  {456,1},	{900,1},	{462,1},	{906,1},
  {468,1},	{912,1}
};

static struct patval_a fuseki191121[] = {
  {456,1},	{900,1},	{462,1},	{906,1},
  {468,1},	{912,1}
};

static struct patval_a fuseki191122[] = {
  {456,1},	{900,1},	{462,1},	{906,1},
  {468,1},	{912,1}
};

static struct patval_a fuseki191123[] = {
  {456,1},	{900,1},	{462,1},	{906,1},
  {468,1},	{912,1}
};

static struct patval_a fuseki191124[] = {
  {456,1},	{900,1},	{462,1},	{906,1},
  {468,1},	{912,1}
};

static struct patval_a fuseki191125[] = {
  {456,1},	{900,1},	{462,1},	{906,1},
  {468,1},	{912,1}
};

static struct patval_a fuseki191126[] = {
  {468,1},	{456,1},	{900,1},	{458,1},
  {912,1},	{529,2}
};

static struct patval_a fuseki191127[] = {
  {456,1},	{826,1},	{900,1},	{912,1},
  {468,1},	{939,2}
};

static struct patval_a fuseki191128[] = {
  {468,1},	{456,1},	{900,1},	{458,1},
  {912,1},	{529,2}
};

static struct patval_a fuseki191129[] = {
  {456,1},	{900,1},	{466,1},	{468,1},
  {912,1},	{543,2}
};

static struct patval_a fuseki191130[] = {
  {456,1},	{826,1},	{900,1},	{912,1},
  {468,1},	{939,2}
};

static struct patval_a fuseki191131[] = {
  {456,1},	{900,1},	{466,1},	{468,1},
  {912,1},	{543,2}
};

static struct patval_a fuseki191132[] = {
  {456,1},	{900,1},	{466,1},	{468,1},
  {912,1},	{543,2}
};

static struct patval_a fuseki191133[] = {
  {468,1},	{456,1},	{900,1},	{902,1},
  {912,1},	{825,2}
};

static struct patval_a fuseki191134[] = {
  {456,1},	{826,1},	{900,1},	{912,1},
  {468,1},	{939,2}
};

static struct patval_a fuseki191135[] = {
  {456,1},	{900,1},	{466,1},	{468,1},
  {912,1},	{543,2}
};

static struct patval_a fuseki191136[] = {
  {456,1},	{826,1},	{900,1},	{912,1},
  {468,1},	{939,2}
};

static struct patval_a fuseki191137[] = {
  {911,1},	{900,2},	{456,2},	{468,2}
};

static struct patval_a fuseki191138[] = {
  {911,1},	{900,2},	{456,2},	{468,2}
};

static struct patval_a fuseki191139[] = {
  {911,1},	{900,2},	{456,2},	{468,2}
};

static struct patval_a fuseki191140[] = {
  {911,1},	{900,2},	{456,2},	{468,2}
};

static struct patval_a fuseki191141[] = {
  {911,1},	{900,2},	{456,2},	{468,2}
};

static struct patval_a fuseki191142[] = {
  {911,1},	{900,2},	{456,2},	{468,2}
};

static struct patval_a fuseki191143[] = {
  {875,1},	{900,2},	{468,2},	{456,2}
};

static struct patval_a fuseki191144[] = {
  {911,1},	{900,2},	{456,2},	{468,2}
};

static struct patval_a fuseki191145[] = {
  {456,1},	{900,1},	{468,1},	{875,1},
  {949,2}
};

static struct patval_a fuseki191146[] = {
  {456,1},	{900,1},	{468,1},	{875,1},
  {949,2}
};

static struct patval_a fuseki191147[] = {
  {456,1},	{900,1},	{468,1},	{875,1},
  {949,2}
};

static struct patval_a fuseki191148[] = {
  {456,1},	{900,1},	{468,1},	{875,1},
  {949,2}
};

static struct patval_a fuseki191149[] = {
  {456,1},	{900,1},	{911,1},	{468,1},
  {913,2}
};

static struct patval_a fuseki191150[] = {
  {456,1},	{900,1},	{468,1},	{875,1},
  {949,2}
};

static struct patval_a fuseki191151[] = {
  {456,1},	{900,1},	{468,1},	{875,1},
  {949,2}
};

static struct patval_a fuseki191152[] = {
  {456,1},	{900,1},	{911,1},	{468,1},
  {913,2}
};

static struct patval_a fuseki191153[] = {
  {529,1},	{456,2},	{900,2},	{462,2},
  {906,2},	{468,2},	{912,2}
};

static struct patval_a fuseki191154[] = {
  {543,1},	{456,2},	{462,2},	{906,2},
  {468,2},	{912,2},	{900,2}
};

static struct patval_a fuseki191155[] = {
  {839,1},	{456,2},	{462,2},	{906,2},
  {468,2},	{912,2},	{900,2}
};

static struct patval_a fuseki191156[] = {
  {543,1},	{456,2},	{462,2},	{906,2},
  {468,2},	{912,2},	{900,2}
};

static struct patval_a fuseki191157[] = {
  {529,1},	{456,2},	{900,2},	{462,2},
  {906,2},	{468,2},	{912,2}
};

static struct patval_a fuseki191158[] = {
  {839,1},	{456,2},	{462,2},	{906,2},
  {468,2},	{912,2},	{900,2}
};

static struct patval_a fuseki191159[] = {
  {543,1},	{456,2},	{462,2},	{906,2},
  {468,2},	{912,2},	{900,2}
};

static struct patval_a fuseki191160[] = {
  {839,1},	{456,2},	{462,2},	{906,2},
  {468,2},	{912,2},	{900,2}
};

static struct patval_a fuseki191161[] = {
  {913,1},	{939,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191162[] = {
  {455,1},	{429,1},	{900,2},	{468,2},
  {912,2}
};

static struct patval_a fuseki191163[] = {
  {913,1},	{939,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191164[] = {
  {455,1},	{429,1},	{900,2},	{468,2},
  {912,2}
};

static struct patval_a fuseki191165[] = {
  {913,1},	{939,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191166[] = {
  {913,1},	{939,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191167[] = {
  {825,1},	{419,1},	{900,2},	{468,2},
  {912,2}
};

static struct patval_a fuseki191168[] = {
  {529,1},	{912,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191169[] = {
  {529,1},	{912,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191170[] = {
  {529,1},	{912,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191171[] = {
  {529,1},	{912,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191172[] = {
  {529,1},	{912,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191173[] = {
  {912,1},	{421,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191174[] = {
  {912,1},	{421,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191175[] = {
  {912,1},	{493,1},	{900,2},	{468,2},
  {419,2}
};

static struct patval_a fuseki191176[] = {
  {912,1},	{457,1},	{900,2},	{468,2},
  {455,2}
};

static struct patval_a fuseki191177[] = {
  {912,1},	{493,1},	{900,2},	{468,2},
  {419,2}
};

static struct patval_a fuseki191178[] = {
  {912,1},	{457,1},	{900,2},	{468,2},
  {455,2}
};

static struct patval_a fuseki191179[] = {
  {948,1},	{900,2},	{468,2}
};

static struct patval_a fuseki191180[] = {
  {420,1},	{900,2},	{468,2}
};

static struct patval_a fuseki191181[] = {
  {948,1},	{900,2},	{468,2}
};

static struct patval_a fuseki191182[] = {
  {948,1},	{900,2},	{468,2}
};

static struct patval_a fuseki191183[] = {
  {420,1},	{900,2},	{468,2}
};

static struct patval_a fuseki191184[] = {
  {456,1},	{900,1},	{543,1},	{468,1},
  {912,1},	{429,2}
};

static struct patval_a fuseki191185[] = {
  {456,1},	{900,1},	{947,1},	{468,1},
  {912,1},	{839,2}
};

static struct patval_a fuseki191186[] = {
  {456,1},	{900,1},	{947,1},	{468,1},
  {912,1},	{839,2}
};

static struct patval_a fuseki191187[] = {
  {825,1},	{456,1},	{900,1},	{912,1},
  {468,1},	{939,2}
};

static struct patval_a fuseki191188[] = {
  {456,1},	{900,1},	{947,1},	{468,1},
  {912,1},	{839,2}
};

static struct patval_a fuseki191189[] = {
  {825,1},	{456,1},	{900,1},	{912,1},
  {468,1},	{939,2}
};

static struct patval_a fuseki191190[] = {
  {825,1},	{456,1},	{900,1},	{912,1},
  {468,1},	{939,2}
};

static struct patval_a fuseki191191[] = {
  {825,1},	{456,1},	{900,1},	{912,1},
  {468,1},	{939,2}
};

static struct patval_a fuseki191192[] = {
  {456,1},	{900,1},	{839,1},	{468,1},
  {912,1},	{947,2}
};

static struct patval_a fuseki191193[] = {
  {825,1},	{456,1},	{900,1},	{912,1},
  {468,1},	{939,2}
};

static struct patval_a fuseki191194[] = {
  {876,1},	{900,2},	{468,2},	{456,2}
};

static struct patval_a fuseki191195[] = {
  {948,1},	{900,2},	{456,2},	{468,2}
};

static struct patval_a fuseki191196[] = {
  {948,1},	{900,2},	{456,2},	{468,2}
};

static struct patval_a fuseki191197[] = {
  {876,1},	{900,2},	{468,2},	{456,2}
};

static struct patval_a fuseki191198[] = {
  {876,1},	{900,2},	{468,2},	{456,2}
};

static struct patval_a fuseki191199[] = {
  {468,1},	{456,1},	{900,1},	{458,1},
  {684,1},	{912,1},	{529,2}
};

static struct patval_a fuseki191200[] = {
  {456,1},	{900,1},	{684,1},	{910,1},
  {468,1},	{912,1},	{839,2}
};

static struct patval_a fuseki191201[] = {
  {468,1},	{456,1},	{900,1},	{902,1},
  {684,1},	{912,1},	{825,2}
};

static struct patval_a fuseki191202[] = {
  {456,1},	{826,1},	{900,1},	{912,1},
  {684,1},	{468,1},	{939,2}
};

static struct patval_a fuseki191203[] = {
  {456,1},	{530,1},	{900,1},	{912,1},
  {684,1},	{468,1},	{421,2}
};

static struct patval_a fuseki191204[] = {
  {468,1},	{456,1},	{900,1},	{902,1},
  {684,1},	{912,1},	{825,2}
};

static struct patval_a fuseki191205[] = {
  {468,1},	{456,1},	{900,1},	{902,1},
  {684,1},	{912,1},	{825,2}
};

static struct patval_a fuseki191206[] = {
  {456,1},	{826,1},	{900,1},	{912,1},
  {684,1},	{468,1},	{939,2}
};

static struct patval_a fuseki191207[] = {
  {456,1},	{900,1},	{684,1},	{910,1},
  {468,1},	{912,1},	{839,2}
};

static struct patval_a fuseki191208[] = {
  {468,1},	{456,1},	{900,1},	{902,1},
  {684,1},	{912,1},	{825,2}
};

static struct patval_a fuseki191209[] = {
  {456,1},	{900,1},	{468,1},	{911,2}
};

static struct patval_a fuseki191210[] = {
  {900,1},	{912,1},	{468,1},	{457,2}
};

static struct patval_a fuseki191211[] = {
  {900,1},	{912,1},	{468,1},	{457,2}
};

static struct patval_a fuseki191212[] = {
  {456,1},	{900,1},	{468,1},	{911,2}
};

static struct patval_a fuseki191213[] = {
  {456,1},	{900,1},	{468,1},	{911,2}
};

static struct patval_a fuseki191214[] = {
  {456,1},	{900,1},	{468,1},	{875,2}
};

static struct patval_a fuseki191215[] = {
  {456,1},	{900,1},	{912,1},	{941,1},
  {468,1},	{939,2}
};

static struct patval_a fuseki191216[] = {
  {456,1},	{900,1},	{945,1},	{912,1},
  {468,1},	{947,2}
};

static struct patval_a fuseki191217[] = {
  {456,1},	{900,1},	{912,1},	{423,1},
  {468,1},	{421,2}
};

static struct patval_a fuseki191218[] = {
  {456,1},	{900,1},	{468,1},	{912,1},
  {765,1},	{839,2}
};

static struct patval_a fuseki191219[] = {
  {468,1},	{900,1},	{457,1},	{455,2}
};

static struct patval_a fuseki191220[] = {
  {468,1},	{900,1},	{457,1},	{455,2}
};

static struct patval_a fuseki191221[] = {
  {900,1},	{911,1},	{468,1},	{913,2}
};

static struct patval_a fuseki191222[] = {
  {900,1},	{468,1},	{875,1},	{949,2}
};

static struct patval_a fuseki191223[] = {
  {900,1},	{468,1},	{875,1},	{949,2}
};

static struct patval_a fuseki191224[] = {
  {900,1},	{911,1},	{468,1},	{913,2}
};

static struct patval_a fuseki191225[] = {
  {900,1},	{911,1},	{468,1},	{913,2}
};

static struct patval_a fuseki191226[] = {
  {456,1},	{900,1},	{466,1},	{468,1},
  {912,2},	{543,2}
};

static struct patval_a fuseki191227[] = {
  {456,1},	{826,1},	{900,1},	{468,1},
  {939,2},	{912,2}
};

static struct patval_a fuseki191228[] = {
  {456,1},	{900,1},	{466,1},	{468,1},
  {912,2},	{543,2}
};

static struct patval_a fuseki191229[] = {
  {542,1},	{900,1},	{912,1},	{468,1},
  {456,2},	{429,2}
};

static struct patval_a fuseki191230[] = {
  {456,1},	{900,1},	{462,1},	{684,1},
  {906,1},	{468,1},	{912,1}
};

static struct patval_a fuseki191231[] = {
  {456,1},	{900,1},	{462,1},	{684,1},
  {906,1},	{468,1},	{912,1}
};

static struct patval_a fuseki191232[] = {
  {419,1},	{900,1},	{468,1},	{949,2}
};

static struct patval_a fuseki191233[] = {
  {913,1},	{900,1},	{468,1},	{455,2}
};

static struct patval_a fuseki191234[] = {
  {419,1},	{900,1},	{468,1},	{949,2}
};

static struct patval_a fuseki191235[] = {
  {913,1},	{900,1},	{468,1},	{455,2}
};

static struct patval_a fuseki191236[] = {
  {455,1},	{900,1},	{468,1},	{949,2}
};

static struct patval_a fuseki191237[] = {
  {949,1},	{900,1},	{468,1},	{455,2}
};

static struct patval_a fuseki191238[] = {
  {455,1},	{900,1},	{468,1},	{949,2}
};

static struct patval_a fuseki191239[] = {
  {949,1},	{900,1},	{468,1},	{455,2}
};

static struct patval_a fuseki191240[] = {
  {456,1},	{678,1},	{900,1},	{462,1},
  {684,1},	{906,1},	{468,1},	{690,1},
  {912,1}
};

static struct patval_a fuseki191241[] = {
  {456,1},	{678,1},	{900,1},	{462,1},
  {684,1},	{906,1},	{468,1},	{690,1},
  {912,1}
};

static struct patval_a fuseki191242[] = {
  {456,1},	{900,1},	{462,1},	{468,1},
  {912,2}
};

static struct patval_a fuseki191243[] = {
  {456,1},	{678,1},	{900,1},	{468,1},
  {912,2}
};

static struct patval_a fuseki191244[] = {
  {456,1},	{900,1},	{462,1},	{468,1},
  {912,2}
};

static struct patval_a fuseki191245[] = {
  {456,1},	{900,1},	{948,1},	{468,1},
  {913,2}
};

static struct patval_a fuseki191246[] = {
  {456,1},	{900,1},	{468,1},	{876,1},
  {949,2}
};

static struct patval_a fuseki191247[] = {
  {456,1},	{900,1},	{468,1},	{876,1},
  {949,2}
};

static struct patval_a fuseki191248[] = {
  {456,1},	{900,1},	{948,1},	{468,1},
  {913,2}
};

static struct patval_a fuseki191249[] = {
  {456,1},	{900,1},	{948,1},	{468,1},
  {913,2}
};

static struct patval_a fuseki191250[] = {
  {456,1},	{900,1},	{948,1},	{468,1},
  {913,2}
};

static struct patval_a fuseki191251[] = {
  {456,1},	{900,1},	{468,1},	{948,2}
};

static struct patval_a fuseki191252[] = {
  {456,1},	{900,1},	{468,1},	{948,2}
};

static struct patval_a fuseki191253[] = {
  {456,1},	{900,1},	{468,1},	{948,2}
};

static struct patval_a fuseki191254[] = {
  {456,1},	{900,1},	{468,1},	{876,2}
};

static struct patval_a fuseki191255[] = {
  {456,1},	{900,1},	{468,1},	{948,2}
};

static struct patval_a fuseki191256[] = {
  {456,1},	{900,1},	{468,1},	{948,2}
};

static struct patval_a fuseki191257[] = {
  {825,1},	{456,2},	{900,2},	{462,2},
  {684,2},	{906,2},	{468,2},	{912,2}
};

static struct patval_a fuseki191258[] = {
  {529,1},	{456,2},	{900,2},	{462,2},
  {684,2},	{906,2},	{468,2},	{912,2}
};

static struct patval_a fuseki191259[] = {
  {543,1},	{456,2},	{462,2},	{684,2},
  {906,2},	{468,2},	{912,2},	{900,2}
};

static struct patval_a fuseki191260[] = {
  {529,1},	{456,2},	{900,2},	{462,2},
  {684,2},	{906,2},	{468,2},	{912,2}
};

static struct patval_a fuseki191261[] = {
  {543,1},	{456,2},	{462,2},	{684,2},
  {906,2},	{468,2},	{912,2},	{900,2}
};

static struct patval_a fuseki191262[] = {
  {825,1},	{456,2},	{900,2},	{462,2},
  {684,2},	{906,2},	{468,2},	{912,2}
};

static struct patval_a fuseki191263[] = {
  {529,1},	{456,2},	{900,2},	{462,2},
  {684,2},	{906,2},	{468,2},	{912,2}
};

static struct patval_a fuseki191264[] = {
  {908,1},	{913,1},	{456,2},	{911,2},
  {468,2},	{900,2}
};

static struct patval_a fuseki191265[] = {
  {908,1},	{913,1},	{456,2},	{911,2},
  {468,2},	{900,2}
};

static struct patval_a fuseki191266[] = {
  {908,1},	{913,1},	{456,2},	{911,2},
  {468,2},	{900,2}
};

static struct patval_a fuseki191267[] = {
  {764,1},	{949,1},	{468,2},	{456,2},
  {875,2},	{900,2}
};

static struct patval_a fuseki191268[] = {
  {764,1},	{949,1},	{468,2},	{456,2},
  {875,2},	{900,2}
};

static struct patval_a fuseki191269[] = {
  {764,1},	{949,1},	{468,2},	{456,2},
  {875,2},	{900,2}
};

static struct patval_a fuseki191270[] = {
  {456,1},	{826,1},	{900,1},	{468,1},
  {939,2},	{913,2}
};

static struct patval_a fuseki191271[] = {
  {542,1},	{900,1},	{912,1},	{468,1},
  {455,2},	{429,2}
};

static struct patval_a fuseki191272[] = {
  {456,1},	{826,1},	{900,1},	{468,1},
  {939,2},	{913,2}
};

static struct patval_a fuseki191273[] = {
  {542,1},	{900,1},	{912,1},	{468,1},
  {455,2},	{429,2}
};

static struct patval_a fuseki191274[] = {
  {456,1},	{900,1},	{466,1},	{468,1},
  {949,2},	{543,2}
};

static struct patval_a fuseki191275[] = {
  {765,1},	{912,1},	{468,2},	{900,2},
  {456,2},	{839,2}
};

static struct patval_a fuseki191276[] = {
  {765,1},	{912,1},	{468,2},	{900,2},
  {456,2},	{839,2}
};

static struct patval_a fuseki191277[] = {
  {456,1},	{900,1},	{913,1},	{468,1},
  {911,2}
};

static struct patval_a fuseki191278[] = {
  {456,1},	{900,1},	{913,1},	{468,1},
  {911,2}
};

static struct patval_a fuseki191279[] = {
  {456,1},	{900,1},	{468,1},	{949,1},
  {875,2}
};

static struct patval_a fuseki191280[] = {
  {456,1},	{900,1},	{913,1},	{468,1},
  {911,2}
};

static struct patval_a fuseki191281[] = {
  {825,1},	{456,2},	{678,2},	{900,2},
  {462,2},	{684,2},	{906,2},	{468,2},
  {690,2},	{912,2}
};

static struct patval_a fuseki191282[] = {
  {939,1},	{678,2},	{900,2},	{456,2},
  {462,2},	{684,2},	{906,2},	{468,2},
  {690,2},	{912,2}
};

static struct patval_a fuseki191283[] = {
  {839,1},	{678,2},	{456,2},	{462,2},
  {684,2},	{906,2},	{468,2},	{690,2},
  {912,2},	{900,2}
};

static struct patval_a fuseki191284[] = {
  {529,1},	{456,2},	{678,2},	{900,2},
  {462,2},	{684,2},	{906,2},	{468,2},
  {690,2},	{912,2}
};

static struct patval_a fuseki191285[] = {
  {939,1},	{678,2},	{900,2},	{456,2},
  {462,2},	{684,2},	{906,2},	{468,2},
  {690,2},	{912,2}
};

static struct patval_a fuseki191286[] = {
  {939,1},	{678,2},	{900,2},	{456,2},
  {462,2},	{684,2},	{906,2},	{468,2},
  {690,2},	{912,2}
};

static struct patval_a fuseki191287[] = {
  {939,1},	{678,2},	{900,2},	{456,2},
  {462,2},	{684,2},	{906,2},	{468,2},
  {690,2},	{912,2}
};

static struct patval_a fuseki191288[] = {
  {429,1},	{421,1},	{900,2},	{530,2},
  {456,2},	{468,2},	{912,2}
};

static struct patval_a fuseki191289[] = {
  {529,1},	{825,1},	{456,2},	{900,2},
  {458,2},	{468,2},	{912,2}
};

static struct patval_a fuseki191290[] = {
  {543,1},	{839,1},	{910,2},	{468,2},
  {912,2},	{456,2},	{900,2}
};

static struct patval_a fuseki191291[] = {
  {529,1},	{825,1},	{456,2},	{900,2},
  {458,2},	{468,2},	{912,2}
};

static struct patval_a fuseki191292[] = {
  {543,1},	{839,1},	{910,2},	{468,2},
  {912,2},	{456,2},	{900,2}
};

static struct patval_a fuseki191293[] = {
  {947,1},	{939,1},	{900,2},	{826,2},
  {456,2},	{468,2},	{912,2}
};

static struct patval_a fuseki191294[] = {
  {543,1},	{839,1},	{466,2},	{468,2},
  {912,2},	{456,2},	{900,2}
};

static struct patval_a fuseki191295[] = {
  {825,1},	{456,1},	{900,1},	{468,1},
  {939,2},	{912,2}
};

static struct patval_a fuseki191296[] = {
  {456,1},	{900,1},	{429,1},	{468,1},
  {912,2},	{543,2}
};

static struct patval_a fuseki191297[] = {
  {825,1},	{456,1},	{900,1},	{468,1},
  {939,2},	{912,2}
};

static struct patval_a fuseki191298[] = {
  {456,1},	{900,1},	{429,1},	{468,1},
  {912,2},	{543,2}
};

static struct patval_a fuseki191299[] = {
  {825,1},	{456,1},	{900,1},	{912,1},
  {684,1},	{468,1},	{939,2}
};

static struct patval_a fuseki191300[] = {
  {825,1},	{456,1},	{900,1},	{912,1},
  {684,1},	{468,1},	{939,2}
};

static struct patval_a fuseki191301[] = {
  {825,1},	{456,1},	{900,1},	{912,1},
  {684,1},	{468,1},	{939,2}
};

static struct patval_a fuseki191302[] = {
  {529,1},	{456,1},	{900,1},	{912,1},
  {684,1},	{468,1},	{421,2}
};

static struct patval_a fuseki191303[] = {
  {825,1},	{456,1},	{900,1},	{912,1},
  {684,1},	{468,1},	{939,2}
};

static struct patval_a fuseki191304[] = {
  {825,1},	{456,1},	{900,1},	{912,1},
  {684,1},	{468,1},	{939,2}
};

static struct patval_a fuseki191305[] = {
  {456,1},	{900,1},	{684,1},	{543,1},
  {468,1},	{912,1},	{429,2}
};

static struct patval_a fuseki191306[] = {
  {456,1},	{900,1},	{684,1},	{947,1},
  {468,1},	{912,1},	{839,2}
};

static struct patval_a fuseki191307[] = {
  {468,1},	{456,1},	{900,1},	{939,1},
  {684,1},	{912,1},	{825,2}
};

static struct patval_a fuseki191308[] = {
  {468,1},	{456,1},	{900,1},	{939,1},
  {684,1},	{912,1},	{825,2}
};

static struct patval_a fuseki191309[] = {
  {492,1},	{419,1},	{468,1},	{900,1},
  {493,2},	{912,2}
};

static struct patval_a fuseki191310[] = {
  {492,1},	{419,1},	{468,1},	{900,1},
  {493,2},	{912,2}
};

static struct patval_a fuseki191311[] = {
  {939,1},	{865,1},	{900,2},	{456,2},
  {941,2},	{468,2},	{912,2}
};

static struct patval_a fuseki191312[] = {
  {827,1},	{825,1},	{456,2},	{900,2},
  {751,2},	{468,2},	{912,2}
};

static struct patval_a fuseki191313[] = {
  {419,1},	{900,1},	{468,1},	{875,2}
};

static struct patval_a fuseki191314[] = {
  {455,1},	{900,1},	{468,1},	{911,2}
};

static struct patval_a fuseki191315[] = {
  {468,1},	{456,1},	{900,1},	{458,1},
  {462,1},	{906,1},	{912,1},	{529,2}
};

static struct patval_a fuseki191316[] = {
  {456,1},	{900,1},	{462,1},	{906,1},
  {910,1},	{468,1},	{912,1},	{839,2}
};

static struct patval_a fuseki191317[] = {
  {468,1},	{456,1},	{900,1},	{902,1},
  {462,1},	{906,1},	{912,1},	{825,2}
};

static struct patval_a fuseki191318[] = {
  {468,1},	{456,1},	{900,1},	{902,1},
  {462,1},	{906,1},	{912,1},	{825,2}
};

static struct patval_a fuseki191319[] = {
  {468,1},	{456,1},	{900,1},	{902,1},
  {462,1},	{906,1},	{912,1},	{825,2}
};

static struct patval_a fuseki191320[] = {
  {493,1},	{529,1},	{912,1},	{492,2},
  {900,2},	{468,2},	{419,2}
};

static struct patval_a fuseki191321[] = {
  {455,1},	{492,1},	{468,1},	{419,1},
  {900,1},	{493,2},	{529,2},	{912,2}
};

static struct patval_a fuseki191322[] = {
  {455,1},	{419,1},	{900,1},	{420,1},
  {468,1},	{421,2},	{457,2},	{912,2}
};

static struct patval_a fuseki191323[] = {
  {455,1},	{419,1},	{900,1},	{420,1},
  {468,1},	{421,2},	{457,2},	{912,2}
};

static struct patval_a fuseki191324[] = {
  {876,1},	{900,1},	{468,1},	{913,1},
  {949,1},	{839,2},	{456,2},	{875,2}
};

static struct patval_a fuseki191325[] = {
  {825,1},	{456,1},	{678,1},	{900,2},
  {902,2},	{468,2},	{912,2}
};

static struct patval_a fuseki191326[] = {
  {906,1},	{912,1},	{939,1},	{900,2},
  {456,2},	{468,2},	{826,2}
};

static struct patval_a fuseki191327[] = {
  {825,1},	{456,1},	{678,1},	{900,2},
  {902,2},	{468,2},	{912,2}
};

static struct patval_a fuseki191328[] = {
  {906,1},	{912,1},	{939,1},	{900,2},
  {456,2},	{468,2},	{826,2}
};

static struct patval_a fuseki191329[] = {
  {912,1},	{543,1},	{690,1},	{468,2},
  {466,2},	{456,2},	{900,2}
};

static struct patval_a fuseki191330[] = {
  {949,1},	{457,1},	{900,2},	{468,2},
  {455,2}
};

static struct patval_a fuseki191331[] = {
  {949,1},	{457,1},	{900,2},	{468,2},
  {455,2}
};

static struct patval_a fuseki191332[] = {
  {949,1},	{457,1},	{900,2},	{468,2},
  {455,2}
};

static struct patval_a fuseki191333[] = {
  {949,1},	{457,1},	{900,2},	{468,2},
  {455,2}
};

static struct patval_a fuseki191334[] = {
  {455,1},	{875,1},	{468,2},	{900,2},
  {949,2}
};

static struct patval_a fuseki191335[] = {
  {912,1},	{429,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191336[] = {
  {825,1},	{912,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191337[] = {
  {912,1},	{429,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191338[] = {
  {912,1},	{429,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191339[] = {
  {825,1},	{912,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191340[] = {
  {912,1},	{429,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191341[] = {
  {456,1},	{939,1},	{900,2},	{468,2},
  {912,2}
};

static struct patval_a fuseki191342[] = {
  {912,1},	{429,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191343[] = {
  {684,1},	{900,2},	{468,2}
};

static struct patval_a fuseki191344[] = {
  {684,1},	{900,2},	{468,2}
};

static struct patval_a fuseki191345[] = {
  {684,1},	{900,2},	{468,2}
};

static struct patval_a fuseki191346[] = {
  {949,1},	{802,1},	{468,2},	{875,2},
  {456,2},	{900,2}
};

static struct patval_a fuseki191347[] = {
  {949,1},	{802,1},	{468,2},	{875,2},
  {456,2},	{900,2}
};

static struct patval_a fuseki191348[] = {
  {949,1},	{802,1},	{468,2},	{875,2},
  {456,2},	{900,2}
};

static struct patval_a fuseki191349[] = {
  {946,1},	{913,1},	{456,2},	{911,2},
  {468,2},	{900,2}
};

static struct patval_a fuseki191350[] = {
  {946,1},	{913,1},	{456,2},	{911,2},
  {468,2},	{900,2}
};

static struct patval_a fuseki191351[] = {
  {456,1},	{900,1},	{468,1},	{690,1},
  {912,1},	{543,2}
};

static struct patval_a fuseki191352[] = {
  {456,1},	{900,1},	{912,1},	{906,1},
  {468,1},	{939,2}
};

static struct patval_a fuseki191353[] = {
  {456,1},	{900,1},	{912,1},	{906,1},
  {468,1},	{939,2}
};

static struct patval_a fuseki191354[] = {
  {456,1},	{900,1},	{912,1},	{906,1},
  {468,1},	{939,2}
};

static struct patval_a fuseki191355[] = {
  {456,1},	{900,1},	{462,1},	{912,1},
  {468,1},	{429,2}
};

static struct patval_a fuseki191356[] = {
  {900,1},	{468,1},	{839,1},	{912,2}
};

static struct patval_a fuseki191357[] = {
  {900,1},	{468,1},	{839,1},	{912,2}
};

static struct patval_a fuseki191358[] = {
  {468,1},	{900,1},	{421,1},	{456,2}
};

static struct patval_a fuseki191359[] = {
  {900,1},	{468,1},	{839,1},	{912,2}
};

static struct patval_a fuseki191360[] = {
  {900,1},	{468,1},	{839,1},	{912,2}
};

static struct patval_a fuseki191361[] = {
  {900,1},	{468,1},	{839,1},	{912,2}
};

static struct patval_a fuseki191362[] = {
  {900,1},	{468,1},	{839,1},	{912,2}
};

static struct patval_a fuseki191363[] = {
  {900,1},	{468,1},	{839,1},	{912,2}
};

static struct patval_a fuseki191364[] = {
  {900,1},	{947,1},	{468,1},	{912,2}
};

static struct patval_a fuseki191365[] = {
  {900,1},	{468,1},	{839,1},	{912,2}
};

static struct patval_a fuseki191366[] = {
  {468,1},	{603,1},	{456,1},	{900,1},
  {684,1},	{912,1},	{529,2}
};

static struct patval_a fuseki191367[] = {
  {468,1},	{603,1},	{456,1},	{900,1},
  {684,1},	{912,1},	{529,2}
};

static struct patval_a fuseki191368[] = {
  {456,1},	{900,1},	{912,1},	{941,1},
  {684,1},	{468,1},	{939,2}
};

static struct patval_a fuseki191369[] = {
  {456,1},	{900,1},	{912,1},	{941,1},
  {684,1},	{468,1},	{939,2}
};

static struct patval_a fuseki191370[] = {
  {456,1},	{900,1},	{912,1},	{941,1},
  {684,1},	{468,1},	{939,2}
};

static struct patval_a fuseki191371[] = {
  {456,1},	{900,1},	{912,1},	{941,1},
  {684,1},	{468,1},	{939,2}
};

static struct patval_a fuseki191372[] = {
  {751,1},	{912,1},	{456,1},	{900,1},
  {684,1},	{468,1},	{825,2}
};

static struct patval_a fuseki191373[] = {
  {456,1},	{900,1},	{462,1},	{468,1},
  {911,2}
};

static struct patval_a fuseki191374[] = {
  {456,1},	{900,1},	{462,1},	{468,1},
  {911,2}
};

static struct patval_a fuseki191375[] = {
  {456,1},	{900,1},	{462,1},	{468,1},
  {911,2}
};

static struct patval_a fuseki191376[] = {
  {456,1},	{900,1},	{462,1},	{468,1},
  {911,2}
};

static struct patval_a fuseki191377[] = {
  {456,1},	{900,1},	{462,1},	{468,1},
  {911,2}
};

static struct patval_a fuseki191378[] = {
  {456,1},	{900,1},	{462,1},	{468,1},
  {911,2}
};

static struct patval_a fuseki191379[] = {
  {456,1},	{678,1},	{900,1},	{462,1},
  {906,1},	{468,1},	{690,1},	{912,1}
};

static struct patval_a fuseki191380[] = {
  {456,1},	{678,1},	{900,1},	{462,1},
  {906,1},	{468,1},	{690,1},	{912,1}
};

static struct patval_a fuseki191381[] = {
  {456,1},	{678,1},	{900,1},	{462,1},
  {906,1},	{468,1},	{690,1},	{912,1}
};

static struct patval_a fuseki191382[] = {
  {456,1},	{948,1},	{900,2},	{468,2},
  {913,2}
};

static struct patval_a fuseki191383[] = {
  {912,1},	{420,1},	{900,2},	{468,2},
  {455,2}
};

static struct patval_a fuseki191384[] = {
  {912,1},	{420,1},	{900,2},	{468,2},
  {455,2}
};

static struct patval_a fuseki191385[] = {
  {492,1},	{912,1},	{900,2},	{468,2},
  {419,2}
};

static struct patval_a fuseki191386[] = {
  {912,1},	{420,1},	{900,2},	{468,2},
  {455,2}
};

static struct patval_a fuseki191387[] = {
  {912,1},	{420,1},	{900,2},	{468,2},
  {455,2}
};

static struct patval_a fuseki191388[] = {
  {912,1},	{420,1},	{900,2},	{468,2},
  {455,2}
};

static struct patval_a fuseki191389[] = {
  {492,1},	{912,1},	{900,2},	{468,2},
  {419,2}
};

static struct patval_a fuseki191390[] = {
  {912,1},	{420,1},	{900,2},	{468,2},
  {455,2}
};

static struct patval_a fuseki191391[] = {
  {912,1},	{420,1},	{900,2},	{468,2},
  {455,2}
};

static struct patval_a fuseki191392[] = {
  {456,1},	{900,1},	{912,1},	{905,1},
  {468,1},	{939,2}
};

static struct patval_a fuseki191393[] = {
  {456,1},	{900,1},	{468,1},	{727,1},
  {912,1},	{839,2}
};

static struct patval_a fuseki191394[] = {
  {456,1},	{900,1},	{912,1},	{905,1},
  {468,1},	{939,2}
};

static struct patval_a fuseki191395[] = {
  {456,1},	{900,1},	{912,1},	{905,1},
  {468,1},	{939,2}
};

static struct patval_a fuseki191396[] = {
  {456,1},	{900,1},	{468,1},	{653,1},
  {912,1},	{543,2}
};

static struct patval_a fuseki191397[] = {
  {456,1},	{900,1},	{912,1},	{905,1},
  {468,1},	{939,2}
};

static struct patval_a fuseki191398[] = {
  {949,1},	{421,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191399[] = {
  {949,1},	{421,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191400[] = {
  {949,1},	{421,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191401[] = {
  {949,1},	{421,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191402[] = {
  {949,1},	{421,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191403[] = {
  {529,1},	{913,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191404[] = {
  {949,1},	{421,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191405[] = {
  {949,1},	{421,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191406[] = {
  {455,1},	{839,1},	{468,2},	{912,2},
  {900,2}
};

static struct patval_a fuseki191407[] = {
  {419,1},	{947,1},	{900,2},	{468,2},
  {912,2}
};

static struct patval_a fuseki191408[] = {
  {949,1},	{421,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191409[] = {
  {455,1},	{839,1},	{468,2},	{912,2},
  {900,2}
};

static struct patval_a fuseki191410[] = {
  {456,1},	{900,1},	{427,1},	{912,1},
  {542,1},	{468,1},	{503,2},	{429,2}
};

static struct patval_a fuseki191411[] = {
  {456,1},	{826,1},	{900,1},	{912,1},
  {468,1},	{941,1},	{939,2},	{865,2}
};

static struct patval_a fuseki191412[] = {
  {456,1},	{826,1},	{900,1},	{912,1},
  {468,1},	{941,1},	{939,2},	{865,2}
};

static struct patval_a fuseki191413[] = {
  {751,1},	{912,1},	{456,1},	{900,1},
  {468,1},	{902,1},	{827,2},	{825,2}
};

static struct patval_a fuseki191414[] = {
  {751,1},	{912,1},	{456,1},	{900,1},
  {468,1},	{902,1},	{827,2},	{825,2}
};

static struct patval_a fuseki191415[] = {
  {456,1},	{900,1},	{910,1},	{765,1},
  {468,1},	{912,1},	{837,2},	{839,2}
};

static struct patval_a fuseki191416[] = {
  {543,1},	{839,1},	{947,2},	{468,2},
  {912,2},	{456,2},	{900,2}
};

static struct patval_a fuseki191417[] = {
  {947,1},	{939,1},	{900,2},	{456,2},
  {825,2},	{468,2},	{912,2}
};

static struct patval_a fuseki191418[] = {
  {429,1},	{421,1},	{900,2},	{456,2},
  {468,2},	{912,2},	{543,2}
};

static struct patval_a fuseki191419[] = {
  {543,1},	{839,1},	{947,2},	{468,2},
  {912,2},	{456,2},	{900,2}
};

static struct patval_a fuseki191420[] = {
  {947,1},	{939,1},	{900,2},	{456,2},
  {468,2},	{912,2},	{839,2}
};

static struct patval_a fuseki191421[] = {
  {947,1},	{939,1},	{900,2},	{456,2},
  {825,2},	{468,2},	{912,2}
};

static struct patval_a fuseki191422[] = {
  {543,1},	{839,1},	{429,2},	{468,2},
  {912,2},	{456,2},	{900,2}
};

static struct patval_a fuseki191423[] = {
  {456,1},	{530,1},	{900,1},	{468,1},
  {421,2},	{912,2}
};

static struct patval_a fuseki191424[] = {
  {456,1},	{530,1},	{900,1},	{468,1},
  {421,2},	{912,2}
};

static struct patval_a fuseki191425[] = {
  {456,1},	{530,1},	{900,1},	{468,1},
  {421,2},	{912,2}
};

static struct patval_a fuseki191426[] = {
  {456,1},	{530,1},	{900,1},	{468,1},
  {421,2},	{912,2}
};

static struct patval_a fuseki191427[] = {
  {456,1},	{900,1},	{468,1},	{949,1},
  {876,2}
};

static struct patval_a fuseki191428[] = {
  {456,1},	{900,1},	{913,1},	{468,1},
  {948,2}
};

static struct patval_a fuseki191429[] = {
  {456,1},	{900,1},	{468,1},	{949,1},
  {876,2}
};

static struct patval_a fuseki191430[] = {
  {913,1},	{457,1},	{900,2},	{468,2},
  {455,2}
};

static struct patval_a fuseki191431[] = {
  {913,1},	{457,1},	{900,2},	{468,2},
  {455,2}
};

static struct patval_a fuseki191432[] = {
  {949,1},	{493,1},	{900,2},	{468,2},
  {419,2}
};

static struct patval_a fuseki191433[] = {
  {949,1},	{493,1},	{900,2},	{468,2},
  {419,2}
};

static struct patval_a fuseki191434[] = {
  {913,1},	{457,1},	{900,2},	{468,2},
  {455,2}
};

static struct patval_a fuseki191435[] = {
  {838,1},	{912,1},	{947,2},	{468,2},
  {456,2},	{900,2}
};

static struct patval_a fuseki191436[] = {
  {838,1},	{912,1},	{947,2},	{468,2},
  {456,2},	{900,2}
};

static struct patval_a fuseki191437[] = {
  {912,1},	{910,1},	{900,2},	{468,2},
  {456,2},	{839,2}
};

static struct patval_a fuseki191438[] = {
  {912,1},	{939,1},	{900,2},	{468,2},
  {419,2}
};

static struct patval_a fuseki191439[] = {
  {543,1},	{912,1},	{468,2},	{900,2},
  {455,2}
};

static struct patval_a fuseki191440[] = {
  {825,1},	{456,1},	{900,2},	{468,2},
  {913,2}
};

static struct patval_a fuseki191441[] = {
  {912,1},	{939,1},	{900,2},	{468,2},
  {419,2}
};

static struct patval_a fuseki191442[] = {
  {912,1},	{939,1},	{900,2},	{468,2},
  {419,2}
};

static struct patval_a fuseki191443[] = {
  {456,1},	{429,1},	{900,2},	{468,2},
  {949,2}
};

static struct patval_a fuseki191444[] = {
  {543,1},	{912,1},	{468,2},	{900,2},
  {455,2}
};

static struct patval_a fuseki191445[] = {
  {543,1},	{912,1},	{468,2},	{900,2},
  {455,2}
};

static struct patval_a fuseki191446[] = {
  {912,1},	{939,1},	{900,2},	{468,2},
  {419,2}
};

static struct patval_a fuseki191447[] = {
  {543,1},	{911,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191448[] = {
  {543,1},	{911,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191449[] = {
  {543,1},	{911,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191450[] = {
  {543,1},	{911,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191451[] = {
  {825,1},	{457,1},	{900,2},	{468,2},
  {912,2}
};

static struct patval_a fuseki191452[] = {
  {543,1},	{911,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191453[] = {
  {543,1},	{911,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191454[] = {
  {543,1},	{911,1},	{900,2},	{468,2},
  {456,2}
};

static struct patval_a fuseki191455[] = {
  {838,1},	{911,1},	{900,2},	{468,2},
  {456,2},	{913,2}
};

static struct patval_a fuseki191456[] = {
  {838,1},	{911,1},	{900,2},	{468,2},
  {456,2},	{913,2}
};

static struct patval_a fuseki191457[] = {
  {838,1},	{911,1},	{900,2},	{468,2},
  {456,2},	{913,2}
};

static struct patval_a fuseki191458[] = {
  {838,1},	{911,1},	{900,2},	{468,2},
  {456,2},	{913,2}
};

static struct patval_a fuseki191459[] = {
  {875,1},	{910,1},	{900,2},	{468,2},
  {456,2},	{949,2}
};

static struct patval_a fuseki191460[] = {
  {913,1},	{908,1},	{911,2},	{468,2},
  {900,2}
};

static struct patval_a fuseki191461[] = {
  {455,1},	{460,1},	{457,2},	{900,2},
  {468,2}
};

static struct patval_a fuseki191462[] = {
  {949,1},	{764,1},	{468,2},	{875,2},
  {900,2}
};

static struct patval_a fuseki191463[] = {
  {949,1},	{764,1},	{468,2},	{875,2},
  {900,2}
};

static struct patval_a fuseki191464[] = {
  {913,1},	{908,1},	{911,2},	{468,2},
  {900,2}
};

static struct patval_a fuseki191465[] = {
  {949,1},	{764,1},	{468,2},	{875,2},
  {900,2}
};

static struct patval_a fuseki191466[] = {
  {468,1},	{900,1},	{948,1},	{456,2}
};

static struct patval_a fuseki191467[] = {
  {900,1},	{420,1},	{468,1},	{912,2}
};

struct fullboard_pattern fuseki19[] = {
  {fuseki190,0,"Fuseki1",900,4924.000000},
  {fuseki191,0,"Fuseki2",937,760.000000},
  {fuseki192,0,"Fuseki3",684,152.000000},
  {fuseki193,0,"Fuseki4",863,119.000000},
  {fuseki194,0,"Fuseki5",938,91.000000},
  {fuseki195,0,"Fuseki6",936,69.000000},
  {fuseki196,1,"Fuseki9",468,2401.000000},
  {fuseki197,1,"Fuseki10",912,911.000000},
  {fuseki198,1,"Fuseki11",913,687.000000},
  {fuseki199,1,"Fuseki12",469,146.000000},
  {fuseki1910,1,"Fuseki13",492,122.000000},
  {fuseki1911,1,"Fuseki14",911,55.000000},
  {fuseki1912,1,"Fuseki15",432,50.000000},
  {fuseki1913,1,"Fuseki16",419,50.000000},
  {fuseki1914,1,"Fuseki17",505,37.000000},
  {fuseki1915,1,"Fuseki18",684,37.000000},
  {fuseki1916,1,"Fuseki19",420,29.000000},
  {fuseki1917,1,"Fuseki20",418,29.000000},
  {fuseki1918,1,"Fuseki21",825,27.000000},
  {fuseki1919,1,"Fuseki22",875,14.000000},
  {fuseki1920,1,"Fuseki23",876,11.000000},
  {fuseki1921,2,"Fuseki24",912,1193.000000},
  {fuseki1922,2,"Fuseki25",913,832.000000},
  {fuseki1923,2,"Fuseki26",949,221.000000},
  {fuseki1924,2,"Fuseki27",876,45.000000},
  {fuseki1925,2,"Fuseki28",493,26.000000},
  {fuseki1926,2,"Fuseki29",543,22.000000},
  {fuseki1927,2,"Fuseki30",950,12.000000},
  {fuseki1928,3,"Fuseki31",912,688.000000},
  {fuseki1929,3,"Fuseki32",469,637.000000},
  {fuseki1930,3,"Fuseki33",492,77.000000},
  {fuseki1931,3,"Fuseki34",493,45.000000},
  {fuseki1932,3,"Fuseki35",419,36.000000},
  {fuseki1933,2,"Fuseki36",456,360.000000},
  {fuseki1934,2,"Fuseki37",913,279.000000},
  {fuseki1935,2,"Fuseki38",468,85.000000},
  {fuseki1936,2,"Fuseki39",949,79.000000},
  {fuseki1937,2,"Fuseki40",937,33.000000},
  {fuseki1938,2,"Fuseki41",467,14.000000},
  {fuseki1939,2,"Fuseki42",420,12.000000},
  {fuseki1940,2,"Fuseki43",431,10.000000},
  {fuseki1941,3,"Fuseki44",456,497.000000},
  {fuseki1942,3,"Fuseki45",455,212.000000},
  {fuseki1943,3,"Fuseki46",492,37.000000},
  {fuseki1944,3,"Fuseki47",911,35.000000},
  {fuseki1945,3,"Fuseki48",493,19.000000},
  {fuseki1946,3,"Fuseki49",419,11.000000},
  {fuseki1947,1,"Fuseki50",468,279.000000},
  {fuseki1948,1,"Fuseki51",456,205.000000},
  {fuseki1949,1,"Fuseki52",455,76.000000},
  {fuseki1950,1,"Fuseki53",468,54.000000},
  {fuseki1951,1,"Fuseki54",899,20.000000},
  {fuseki1952,1,"Fuseki55",863,16.000000},
  {fuseki1953,1,"Fuseki56",938,14.000000},
  {fuseki1954,1,"Fuseki57",899,11.000000},
  {fuseki1955,4,"Fuseki58",457,238.000000},
  {fuseki1956,4,"Fuseki59",690,227.000000},
  {fuseki1957,4,"Fuseki60",825,109.000000},
  {fuseki1958,4,"Fuseki61",506,45.000000},
  {fuseki1959,4,"Fuseki62",939,28.000000},
  {fuseki1960,4,"Fuseki63",691,11.000000},
  {fuseki1961,4,"Fuseki64",421,10.000000},
  {fuseki1962,4,"Fuseki65",543,312.000000},
  {fuseki1963,4,"Fuseki66",944,114.000000},
  {fuseki1964,4,"Fuseki67",727,101.000000},
  {fuseki1965,4,"Fuseki68",948,55.000000},
  {fuseki1966,4,"Fuseki69",947,39.000000},
  {fuseki1967,4,"Fuseki70",429,17.000000},
  {fuseki1968,2,"Fuseki71",456,265.000000},
  {fuseki1969,2,"Fuseki72",913,169.000000},
  {fuseki1970,2,"Fuseki73",468,98.000000},
  {fuseki1971,2,"Fuseki74",455,56.000000},
  {fuseki1972,2,"Fuseki75",431,28.000000},
  {fuseki1973,2,"Fuseki76",505,20.000000},
  {fuseki1974,2,"Fuseki77",431,15.000000},
  {fuseki1975,4,"Fuseki78",947,304.000000},
  {fuseki1976,4,"Fuseki79",906,269.000000},
  {fuseki1977,4,"Fuseki80",939,34.000000},
  {fuseki1978,4,"Fuseki81",684,19.000000},
  {fuseki1979,4,"Fuseki82",906,12.000000},
  {fuseki1980,5,"Fuseki83",429,74.000000},
  {fuseki1981,5,"Fuseki84",466,56.000000},
  {fuseki1982,5,"Fuseki85",911,45.000000},
  {fuseki1983,5,"Fuseki86",617,39.000000},
  {fuseki1984,5,"Fuseki87",463,33.000000},
  {fuseki1985,5,"Fuseki88",906,22.000000},
  {fuseki1986,3,"Fuseki89",468,198.000000},
  {fuseki1987,3,"Fuseki90",455,28.000000},
  {fuseki1988,3,"Fuseki91",911,22.000000},
  {fuseki1989,3,"Fuseki92",431,18.000000},
  {fuseki1990,3,"Fuseki93",910,13.000000},
  {fuseki1991,5,"Fuseki94",429,82.000000},
  {fuseki1992,5,"Fuseki95",617,74.000000},
  {fuseki1993,5,"Fuseki96",458,57.000000},
  {fuseki1994,5,"Fuseki97",906,25.000000},
  {fuseki1995,5,"Fuseki98",641,20.000000},
  {fuseki1996,5,"Fuseki99",424,9.000000},
  {fuseki1997,3,"Fuseki100",900,101.000000},
  {fuseki1998,3,"Fuseki101",469,90.000000},
  {fuseki1999,3,"Fuseki102",469,36.000000},
  {fuseki19100,3,"Fuseki103",948,20.000000},
  {fuseki19101,3,"Fuseki104",430,16.000000},
  {fuseki19102,2,"Fuseki105",913,117.000000},
  {fuseki19103,2,"Fuseki106",912,40.000000},
  {fuseki19104,2,"Fuseki107",468,32.000000},
  {fuseki19105,2,"Fuseki108",419,28.000000},
  {fuseki19106,2,"Fuseki109",949,21.000000},
  {fuseki19107,2,"Fuseki110",420,13.000000},
  {fuseki19108,5,"Fuseki111",825,202.000000},
  {fuseki19109,5,"Fuseki112",690,30.000000},
  {fuseki19110,5,"Fuseki113",678,13.000000},
  {fuseki19111,4,"Fuseki114",543,75.000000},
  {fuseki19112,4,"Fuseki115",457,58.000000},
  {fuseki19113,4,"Fuseki116",654,45.000000},
  {fuseki19114,4,"Fuseki117",907,40.000000},
  {fuseki19115,4,"Fuseki118",948,13.000000},
  {fuseki19116,4,"Fuseki119",938,9.000000},
  {fuseki19117,3,"Fuseki120",456,120.000000},
  {fuseki19118,3,"Fuseki121",455,63.000000},
  {fuseki19119,3,"Fuseki122",863,33.000000},
  {fuseki19120,3,"Fuseki123",876,18.000000},
  {fuseki19121,5,"Fuseki124",460,93.000000},
  {fuseki19122,5,"Fuseki125",506,62.000000},
  {fuseki19123,5,"Fuseki126",542,29.000000},
  {fuseki19124,5,"Fuseki127",422,24.000000},
  {fuseki19125,5,"Fuseki128",947,149.000000},
  {fuseki19126,5,"Fuseki129",939,47.000000},
  {fuseki19127,2,"Fuseki130",913,92.000000},
  {fuseki19128,2,"Fuseki131",912,39.000000},
  {fuseki19129,2,"Fuseki132",469,29.000000},
  {fuseki19130,2,"Fuseki133",468,16.000000},
  {fuseki19131,6,"Fuseki134",751,91.000000},
  {fuseki19132,6,"Fuseki135",838,28.000000},
  {fuseki19133,6,"Fuseki136",910,26.000000},
  {fuseki19134,6,"Fuseki137",906,14.000000},
  {fuseki19135,4,"Fuseki138",876,63.000000},
  {fuseki19136,4,"Fuseki139",529,53.000000},
  {fuseki19137,4,"Fuseki140",728,37.000000},
  {fuseki19138,4,"Fuseki141",863,9.000000},
  {fuseki19139,4,"Fuseki142",825,9.000000},
  {fuseki19140,4,"Fuseki143",947,7.000000},
  {fuseki19141,3,"Fuseki144",468,49.000000},
  {fuseki19142,3,"Fuseki145",949,43.000000},
  {fuseki19143,3,"Fuseki146",469,30.000000},
  {fuseki19144,3,"Fuseki147",911,11.000000},
  {fuseki19145,3,"Fuseki148",862,10.000000},
  {fuseki19146,3,"Fuseki149",938,8.000000},
  {fuseki19147,3,"Fuseki150",432,6.000000},
  {fuseki19148,1,"Fuseki151",912,92.000000},
  {fuseki19149,6,"Fuseki152",423,64.000000},
  {fuseki19150,6,"Fuseki153",910,29.000000},
  {fuseki19151,6,"Fuseki154",902,17.000000},
  {fuseki19152,6,"Fuseki155",690,11.000000},
  {fuseki19153,6,"Fuseki156",715,10.000000},
  {fuseki19154,2,"Fuseki157",912,45.000000},
  {fuseki19155,2,"Fuseki158",912,30.000000},
  {fuseki19156,2,"Fuseki159",419,27.000000},
  {fuseki19157,2,"Fuseki160",455,8.000000},
  {fuseki19158,2,"Fuseki161",913,8.000000},
  {fuseki19159,2,"Fuseki162",505,6.000000},
  {fuseki19160,2,"Fuseki163",467,5.000000},
  {fuseki19161,4,"Fuseki164",862,68.000000},
  {fuseki19162,4,"Fuseki165",529,37.000000},
  {fuseki19163,4,"Fuseki166",825,8.000000},
  {fuseki19164,4,"Fuseki167",493,7.000000},
  {fuseki19165,4,"Fuseki168",543,7.000000},
  {fuseki19166,3,"Fuseki169",456,75.000000},
  {fuseki19167,3,"Fuseki170",455,32.000000},
  {fuseki19168,3,"Fuseki171",901,11.000000},
  {fuseki19169,2,"Fuseki172",912,40.000000},
  {fuseki19170,2,"Fuseki173",913,26.000000},
  {fuseki19171,2,"Fuseki174",456,25.000000},
  {fuseki19172,2,"Fuseki175",949,4.000000},
  {fuseki19173,2,"Fuseki176",876,4.000000},
  {fuseki19174,2,"Fuseki177",431,4.000000},
  {fuseki19175,3,"Fuseki178",456,69.000000},
  {fuseki19176,3,"Fuseki179",455,29.000000},
  {fuseki19177,3,"Fuseki180",457,12.000000},
  {fuseki19178,1,"Fuseki181",900,47.000000},
  {fuseki19179,1,"Fuseki182",912,28.000000},
  {fuseki19180,1,"Fuseki183",912,10.000000},
  {fuseki19181,5,"Fuseki184",825,39.000000},
  {fuseki19182,5,"Fuseki185",801,26.000000},
  {fuseki19183,5,"Fuseki186",426,12.000000},
  {fuseki19184,5,"Fuseki187",462,12.000000},
  {fuseki19185,5,"Fuseki188",462,9.000000},
  {fuseki19186,5,"Fuseki189",677,4.000000},
  {fuseki19187,3,"Fuseki190",468,59.000000},
  {fuseki19188,3,"Fuseki191",862,25.000000},
  {fuseki19189,3,"Fuseki192",863,12.000000},
  {fuseki19190,3,"Fuseki193",949,7.000000},
  {fuseki19191,5,"Fuseki194",939,36.000000},
  {fuseki19192,5,"Fuseki195",458,29.000000},
  {fuseki19193,5,"Fuseki196",641,15.000000},
  {fuseki19194,5,"Fuseki197",678,10.000000},
  {fuseki19195,5,"Fuseki198",941,8.000000},
  {fuseki19196,3,"Fuseki199",456,30.000000},
  {fuseki19197,3,"Fuseki200",913,19.000000},
  {fuseki19198,3,"Fuseki201",455,13.000000},
  {fuseki19199,3,"Fuseki202",876,10.000000},
  {fuseki19200,3,"Fuseki203",418,10.000000},
  {fuseki19201,3,"Fuseki204",875,6.000000},
  {fuseki19202,3,"Fuseki205",543,5.000000},
  {fuseki19203,5,"Fuseki206",801,30.000000},
  {fuseki19204,5,"Fuseki207",825,30.000000},
  {fuseki19205,5,"Fuseki208",906,11.000000},
  {fuseki19206,5,"Fuseki209",678,6.000000},
  {fuseki19207,5,"Fuseki210",727,4.000000},
  {fuseki19208,5,"Fuseki211",728,3.000000},
  {fuseki19209,6,"Fuseki212",567,43.000000},
  {fuseki19210,6,"Fuseki213",531,18.000000},
  {fuseki19211,6,"Fuseki214",492,15.000000},
  {fuseki19212,6,"Fuseki215",418,6.000000},
  {fuseki19213,2,"Fuseki216",906,22.000000},
  {fuseki19214,2,"Fuseki217",912,18.000000},
  {fuseki19215,2,"Fuseki218",912,14.000000},
  {fuseki19216,2,"Fuseki219",862,6.000000},
  {fuseki19217,2,"Fuseki220",948,4.000000},
  {fuseki19218,2,"Fuseki221",418,4.000000},
  {fuseki19219,2,"Fuseki223",493,3.000000},
  {fuseki19220,1,"Fuseki224",468,33.000000},
  {fuseki19221,1,"Fuseki225",456,25.000000},
  {fuseki19222,1,"Fuseki226",899,6.000000},
  {fuseki19223,1,"Fuseki227",456,4.000000},
  {fuseki19224,1,"Fuseki228",455,4.000000},
  {fuseki19225,7,"Fuseki229",936,53.000000},
  {fuseki19226,7,"Fuseki230",495,17.000000},
  {fuseki19227,7,"Fuseki231",764,14.000000},
  {fuseki19228,4,"Fuseki232",457,34.000000},
  {fuseki19229,4,"Fuseki233",906,31.000000},
  {fuseki19230,4,"Fuseki234",948,10.000000},
  {fuseki19231,4,"Fuseki235",678,24.000000},
  {fuseki19232,4,"Fuseki236",419,22.000000},
  {fuseki19233,4,"Fuseki237",421,16.000000},
  {fuseki19234,4,"Fuseki238",457,7.000000},
  {fuseki19235,4,"Fuseki239",529,6.000000},
  {fuseki19236,4,"Fuseki240",677,4.000000},
  {fuseki19237,4,"Fuseki241",938,38.000000},
  {fuseki19238,4,"Fuseki242",543,24.000000},
  {fuseki19239,4,"Fuseki243",728,11.000000},
  {fuseki19240,4,"Fuseki244",467,5.000000},
  {fuseki19241,3,"Fuseki245",456,53.000000},
  {fuseki19242,3,"Fuseki246",455,14.000000},
  {fuseki19243,6,"Fuseki247",470,35.000000},
  {fuseki19244,6,"Fuseki248",678,32.000000},
  {fuseki19245,6,"Fuseki249",529,5.000000},
  {fuseki19246,2,"Fuseki250",913,35.000000},
  {fuseki19247,2,"Fuseki251",912,11.000000},
  {fuseki19248,2,"Fuseki252",469,7.000000},
  {fuseki19249,2,"Fuseki253",456,5.000000},
  {fuseki19250,2,"Fuseki254",469,5.000000},
  {fuseki19251,5,"Fuseki255",429,18.000000},
  {fuseki19252,5,"Fuseki256",466,15.000000},
  {fuseki19253,5,"Fuseki257",653,12.000000},
  {fuseki19254,5,"Fuseki258",875,10.000000},
  {fuseki19255,5,"Fuseki259",948,7.000000},
  {fuseki19256,5,"Fuseki260",617,4.000000},
  {fuseki19257,5,"Fuseki261",654,3.000000},
  {fuseki19258,5,"Fuseki262",690,2.000000},
  {fuseki19259,5,"Fuseki263",788,2.000000},
  {fuseki19260,4,"Fuseki264",505,35.000000},
  {fuseki19261,4,"Fuseki265",906,18.000000},
  {fuseki19262,4,"Fuseki266",948,10.000000},
  {fuseki19263,4,"Fuseki267",875,5.000000},
  {fuseki19264,6,"Fuseki268",690,42.000000},
  {fuseki19265,6,"Fuseki269",727,14.000000},
  {fuseki19266,6,"Fuseki270",470,10.000000},
  {fuseki19267,6,"Fuseki271",432,40.000000},
  {fuseki19268,6,"Fuseki272",531,27.000000},
  {fuseki19269,6,"Fuseki273",616,4.000000},
  {fuseki19270,5,"Fuseki274",943,46.000000},
  {fuseki19271,5,"Fuseki275",825,8.000000},
  {fuseki19272,5,"Fuseki276",906,6.000000},
  {fuseki19273,5,"Fuseki277",911,37.000000},
  {fuseki19274,5,"Fuseki278",943,12.000000},
  {fuseki19275,5,"Fuseki279",947,7.000000},
  {fuseki19276,5,"Fuseki280",492,5.000000},
  {fuseki19277,3,"Fuseki281",455,39.000000},
  {fuseki19278,3,"Fuseki282",456,24.000000},
  {fuseki19279,1,"Fuseki283",456,42.000000},
  {fuseki19280,1,"Fuseki284",912,8.000000},
  {fuseki19281,1,"Fuseki285",455,5.000000},
  {fuseki19282,1,"Fuseki286",937,5.000000},
  {fuseki19283,7,"Fuseki287",418,29.000000},
  {fuseki19284,7,"Fuseki288",752,16.000000},
  {fuseki19285,7,"Fuseki289",827,10.000000},
  {fuseki19286,7,"Fuseki290",825,5.000000},
  {fuseki19287,7,"Fuseki291",902,3.000000},
  {fuseki19288,6,"Fuseki292",543,54.000000},
  {fuseki19289,6,"Fuseki293",456,8.000000},
  {fuseki19290,4,"Fuseki294",901,22.000000},
  {fuseki19291,4,"Fuseki295",492,13.000000},
  {fuseki19292,4,"Fuseki296",690,12.000000},
  {fuseki19293,4,"Fuseki297",939,4.000000},
  {fuseki19294,5,"Fuseki298",460,26.000000},
  {fuseki19295,5,"Fuseki299",420,14.000000},
  {fuseki19296,5,"Fuseki300",946,8.000000},
  {fuseki19297,5,"Fuseki301",530,5.000000},
  {fuseki19298,3,"Fuseki302",900,23.000000},
  {fuseki19299,3,"Fuseki303",431,13.000000},
  {fuseki19300,3,"Fuseki304",457,6.000000},
  {fuseki19301,3,"Fuseki305",506,4.000000},
  {fuseki19302,3,"Fuseki306",458,3.000000},
  {fuseki19303,6,"Fuseki307",454,24.000000},
  {fuseki19304,6,"Fuseki308",906,20.000000},
  {fuseki19305,6,"Fuseki309",463,6.000000},
  {fuseki19306,5,"Fuseki310",728,22.000000},
  {fuseki19307,5,"Fuseki311",691,14.000000},
  {fuseki19308,5,"Fuseki312",690,7.000000},
  {fuseki19309,5,"Fuseki313",825,6.000000},
  {fuseki19310,6,"Fuseki314",690,40.000000},
  {fuseki19311,6,"Fuseki315",653,11.000000},
  {fuseki19312,6,"Fuseki316",470,4.000000},
  {fuseki19313,2,"Fuseki317",456,23.000000},
  {fuseki19314,2,"Fuseki318",419,12.000000},
  {fuseki19315,2,"Fuseki319",468,9.000000},
  {fuseki19316,2,"Fuseki320",457,3.000000},
  {fuseki19317,2,"Fuseki321",419,3.000000},
  {fuseki19318,7,"Fuseki322",469,53.000000},
  {fuseki19319,2,"Fuseki323",937,17.000000},
  {fuseki19320,2,"Fuseki324",456,9.000000},
  {fuseki19321,2,"Fuseki325",456,8.000000},
  {fuseki19322,2,"Fuseki326",469,8.000000},
  {fuseki19323,2,"Fuseki327",469,3.000000},
  {fuseki19324,2,"Fuseki328",506,2.000000},
  {fuseki19325,2,"Fuseki329",431,2.000000},
  {fuseki19326,2,"Fuseki330",938,2.000000},
  {fuseki19327,8,"Fuseki331",458,25.000000},
  {fuseki19328,8,"Fuseki332",579,13.000000},
  {fuseki19329,8,"Fuseki333",543,9.000000},
  {fuseki19330,8,"Fuseki334",429,5.000000},
  {fuseki19331,8,"Fuseki335",937,51.000000},
  {fuseki19332,4,"Fuseki336",839,39.000000},
  {fuseki19333,4,"Fuseki337",684,5.000000},
  {fuseki19334,5,"Fuseki338",429,12.000000},
  {fuseki19335,5,"Fuseki339",457,10.000000},
  {fuseki19336,5,"Fuseki340",466,9.000000},
  {fuseki19337,5,"Fuseki341",427,7.000000},
  {fuseki19338,5,"Fuseki342",653,5.000000},
  {fuseki19339,5,"Fuseki343",862,3.000000},
  {fuseki19340,5,"Fuseki344",690,2.000000},
  {fuseki19341,5,"Fuseki345",825,2.000000},
  {fuseki19342,9,"Fuseki346",899,51.000000},
  {fuseki19343,2,"Fuseki347",912,26.000000},
  {fuseki19344,2,"Fuseki348",913,8.000000},
  {fuseki19345,2,"Fuseki349",911,3.000000},
  {fuseki19346,2,"Fuseki350",455,3.000000},
  {fuseki19347,2,"Fuseki351",468,3.000000},
  {fuseki19348,2,"Fuseki352",912,22.000000},
  {fuseki19349,2,"Fuseki353",899,11.000000},
  {fuseki19350,2,"Fuseki354",468,6.000000},
  {fuseki19351,2,"Fuseki355",419,5.000000},
  {fuseki19352,5,"Fuseki356",460,18.000000},
  {fuseki19353,5,"Fuseki357",424,7.000000},
  {fuseki19354,5,"Fuseki358",580,6.000000},
  {fuseki19355,5,"Fuseki359",937,4.000000},
  {fuseki19356,5,"Fuseki360",423,3.000000},
  {fuseki19357,5,"Fuseki361",467,2.000000},
  {fuseki19358,5,"Fuseki362",911,2.000000},
  {fuseki19359,6,"Fuseki363",765,19.000000},
  {fuseki19360,6,"Fuseki364",910,9.000000},
  {fuseki19361,6,"Fuseki365",905,4.000000},
  {fuseki19362,6,"Fuseki366",458,3.000000},
  {fuseki19363,6,"Fuseki367",690,2.000000},
  {fuseki19364,6,"Fuseki368",457,2.000000},
  {fuseki19365,6,"Fuseki369",495,2.000000},
  {fuseki19366,6,"Fuseki370",678,2.000000},
  {fuseki19367,6,"Fuseki371",939,2.000000},
  {fuseki19368,4,"Fuseki372",419,12.000000},
  {fuseki19369,4,"Fuseki373",543,11.000000},
  {fuseki19370,4,"Fuseki374",906,11.000000},
  {fuseki19371,4,"Fuseki375",432,2.000000},
  {fuseki19372,2,"Fuseki376",875,12.000000},
  {fuseki19373,2,"Fuseki377",912,5.000000},
  {fuseki19374,2,"Fuseki378",949,4.000000},
  {fuseki19375,2,"Fuseki379",875,4.000000},
  {fuseki19376,2,"Fuseki380",875,4.000000},
  {fuseki19377,2,"Fuseki381",911,3.000000},
  {fuseki19378,2,"Fuseki382",876,3.000000},
  {fuseki19379,2,"Fuseki383",912,2.000000},
  {fuseki19380,2,"Fuseki384",949,2.000000},
  {fuseki19381,2,"Fuseki385",949,2.000000},
  {fuseki19382,6,"Fuseki387",945,26.000000},
  {fuseki19383,6,"Fuseki388",425,6.000000},
  {fuseki19384,6,"Fuseki389",940,4.000000},
  {fuseki19385,6,"Fuseki390",908,13.000000},
  {fuseki19386,6,"Fuseki391",429,10.000000},
  {fuseki19387,6,"Fuseki392",874,7.000000},
  {fuseki19388,6,"Fuseki393",838,6.000000},
  {fuseki19389,6,"Fuseki394",948,5.000000},
  {fuseki19390,6,"Fuseki395",946,4.000000},
  {fuseki19391,4,"Fuseki396",728,11.000000},
  {fuseki19392,4,"Fuseki397",875,10.000000},
  {fuseki19393,4,"Fuseki398",907,6.000000},
  {fuseki19394,4,"Fuseki399",467,5.000000},
  {fuseki19395,4,"Fuseki400",691,3.000000},
  {fuseki19396,4,"Fuseki401",430,2.000000},
  {fuseki19397,4,"Fuseki402",690,2.000000},
  {fuseki19398,4,"Fuseki403",876,2.000000},
  {fuseki19399,3,"Fuseki404",456,28.000000},
  {fuseki19400,3,"Fuseki405",455,10.000000},
  {fuseki19401,3,"Fuseki406",949,3.000000},
  {fuseki19402,5,"Fuseki407",825,23.000000},
  {fuseki19403,5,"Fuseki408",641,7.000000},
  {fuseki19404,5,"Fuseki409",728,3.000000},
  {fuseki19405,3,"Fuseki410",455,12.000000},
  {fuseki19406,3,"Fuseki411",506,12.000000},
  {fuseki19407,3,"Fuseki412",900,12.000000},
  {fuseki19408,3,"Fuseki413",467,3.000000},
  {fuseki19409,3,"Fuseki414",939,2.000000},
  {fuseki19410,4,"Fuseki415",911,16.000000},
  {fuseki19411,4,"Fuseki416",420,15.000000},
  {fuseki19412,4,"Fuseki417",421,7.000000},
  {fuseki19413,4,"Fuseki418",684,2.000000},
  {fuseki19414,4,"Fuseki419",839,2.000000},
  {fuseki19415,4,"Fuseki420",467,25.000000},
  {fuseki19416,4,"Fuseki421",430,7.000000},
  {fuseki19417,4,"Fuseki422",944,4.000000},
  {fuseki19418,4,"Fuseki423",653,4.000000},
  {fuseki19419,7,"Fuseki424",494,31.000000},
  {fuseki19420,7,"Fuseki425",531,9.000000},
  {fuseki19421,5,"Fuseki426",943,33.000000},
  {fuseki19422,5,"Fuseki427",714,4.000000},
  {fuseki19423,2,"Fuseki428",913,12.000000},
  {fuseki19424,2,"Fuseki429",950,9.000000},
  {fuseki19425,2,"Fuseki430",468,7.000000},
  {fuseki19426,2,"Fuseki431",543,3.000000},
  {fuseki19427,2,"Fuseki432",948,3.000000},
  {fuseki19428,2,"Fuseki433",418,2.000000},
  {fuseki19429,2,"Fuseki434",876,2.000000},
  {fuseki19430,4,"Fuseki435",543,16.000000},
  {fuseki19431,4,"Fuseki436",907,6.000000},
  {fuseki19432,4,"Fuseki437",492,5.000000},
  {fuseki19433,4,"Fuseki438",640,4.000000},
  {fuseki19434,4,"Fuseki439",419,3.000000},
  {fuseki19435,4,"Fuseki440",425,2.000000},
  {fuseki19436,4,"Fuseki441",457,2.000000},
  {fuseki19437,7,"Fuseki442",947,18.000000},
  {fuseki19438,7,"Fuseki443",493,7.000000},
  {fuseki19439,7,"Fuseki444",530,6.000000},
  {fuseki19440,7,"Fuseki445",948,6.000000},
  {fuseki19441,7,"Fuseki446",825,2.000000},
  {fuseki19442,3,"Fuseki447",912,18.000000},
  {fuseki19443,3,"Fuseki448",913,8.000000},
  {fuseki19444,3,"Fuseki449",455,4.000000},
  {fuseki19445,3,"Fuseki450",467,3.000000},
  {fuseki19446,3,"Fuseki451",430,2.000000},
  {fuseki19447,3,"Fuseki452",862,2.000000},
  {fuseki19448,3,"Fuseki453",418,2.000000},
  {fuseki19449,5,"Fuseki454",825,18.000000},
  {fuseki19450,5,"Fuseki455",728,10.000000},
  {fuseki19451,5,"Fuseki456",801,3.000000},
  {fuseki19452,5,"Fuseki457",677,2.000000},
  {fuseki19453,4,"Fuseki458",862,22.000000},
  {fuseki19454,4,"Fuseki459",876,6.000000},
  {fuseki19455,4,"Fuseki460",457,4.000000},
  {fuseki19456,4,"Fuseki461",505,4.000000},
  {fuseki19457,7,"Fuseki462",469,34.000000},
  {fuseki19458,7,"Fuseki463",431,6.000000},
  {fuseki19459,7,"Fuseki464",863,15.000000},
  {fuseki19460,7,"Fuseki465",825,7.000000},
  {fuseki19461,7,"Fuseki466",910,4.000000},
  {fuseki19462,7,"Fuseki467",421,4.000000},
  {fuseki19463,7,"Fuseki468",492,4.000000},
  {fuseki19464,7,"Fuseki469",939,4.000000},
  {fuseki19465,5,"Fuseki470",543,19.000000},
  {fuseki19466,5,"Fuseki471",946,4.000000},
  {fuseki19467,5,"Fuseki472",466,4.000000},
  {fuseki19468,5,"Fuseki473",765,3.000000},
  {fuseki19469,5,"Fuseki474",458,2.000000},
  {fuseki19470,5,"Fuseki475",727,2.000000},
  {fuseki19471,6,"Fuseki476",432,18.000000},
  {fuseki19472,6,"Fuseki477",541,15.000000},
  {fuseki19473,6,"Fuseki478",464,4.000000},
  {fuseki19474,5,"Fuseki479",839,13.000000},
  {fuseki19475,5,"Fuseki480",458,7.000000},
  {fuseki19476,5,"Fuseki481",727,7.000000},
  {fuseki19477,5,"Fuseki482",603,5.000000},
  {fuseki19478,5,"Fuseki483",825,2.000000},
  {fuseki19479,5,"Fuseki484",948,2.000000},
  {fuseki19480,5,"Fuseki485",906,2.000000},
  {fuseki19481,6,"Fuseki486",902,18.000000},
  {fuseki19482,6,"Fuseki487",463,9.000000},
  {fuseki19483,6,"Fuseki489",751,5.000000},
  {fuseki19484,3,"Fuseki490",862,12.000000},
  {fuseki19485,3,"Fuseki491",468,8.000000},
  {fuseki19486,3,"Fuseki492",469,8.000000},
  {fuseki19487,3,"Fuseki493",469,4.000000},
  {fuseki19488,3,"Fuseki494",467,2.000000},
  {fuseki19489,3,"Fuseki495",418,2.000000},
  {fuseki19490,5,"Fuseki496",943,17.000000},
  {fuseki19491,5,"Fuseki497",825,7.000000},
  {fuseki19492,5,"Fuseki498",462,5.000000},
  {fuseki19493,5,"Fuseki499",825,2.000000},
  {fuseki19494,5,"Fuseki500",640,2.000000},
  {fuseki19495,2,"Fuseki501",912,18.000000},
  {fuseki19496,2,"Fuseki502",456,10.000000},
  {fuseki19497,2,"Fuseki503",906,4.000000},
  {fuseki19498,5,"Fuseki504",421,12.000000},
  {fuseki19499,5,"Fuseki505",863,7.000000},
  {fuseki19500,5,"Fuseki506",542,6.000000},
  {fuseki19501,5,"Fuseki507",463,5.000000},
  {fuseki19502,5,"Fuseki508",826,3.000000},
  {fuseki19503,5,"Fuseki509",603,2.000000},
  {fuseki19504,6,"Fuseki510",948,20.000000},
  {fuseki19505,6,"Fuseki511",904,11.000000},
  {fuseki19506,6,"Fuseki512",946,2.000000},
  {fuseki19507,6,"Fuseki513",907,2.000000},
  {fuseki19508,2,"Fuseki514",456,8.000000},
  {fuseki19509,2,"Fuseki515",912,7.000000},
  {fuseki19510,2,"Fuseki516",913,7.000000},
  {fuseki19511,2,"Fuseki517",419,6.000000},
  {fuseki19512,5,"Fuseki518",825,17.000000},
  {fuseki19513,5,"Fuseki519",466,6.000000},
  {fuseki19514,5,"Fuseki520",751,4.000000},
  {fuseki19515,5,"Fuseki521",906,3.000000},
  {fuseki19516,4,"Fuseki522",543,15.000000},
  {fuseki19517,4,"Fuseki523",949,10.000000},
  {fuseki19518,4,"Fuseki524",421,3.000000},
  {fuseki19519,3,"Fuseki525",900,19.000000},
  {fuseki19520,3,"Fuseki526",913,9.000000},
  {fuseki19521,3,"Fuseki527",431,3.000000},
  {fuseki19522,3,"Fuseki528",530,3.000000},
  {fuseki19523,6,"Fuseki529",690,16.000000},
  {fuseki19524,6,"Fuseki530",898,14.000000},
  {fuseki19525,6,"Fuseki531",430,2.000000},
  {fuseki19526,6,"Fuseki532",531,2.000000},
  {fuseki19527,4,"Fuseki533",908,10.000000},
  {fuseki19528,4,"Fuseki534",838,7.000000},
  {fuseki19529,4,"Fuseki535",420,6.000000},
  {fuseki19530,4,"Fuseki536",419,4.000000},
  {fuseki19531,4,"Fuseki537",456,2.000000},
  {fuseki19532,4,"Fuseki538",874,2.000000},
  {fuseki19533,4,"Fuseki539",801,2.000000},
  {fuseki19534,7,"Fuseki540",432,21.000000},
  {fuseki19535,7,"Fuseki541",939,7.000000},
  {fuseki19536,5,"Fuseki542",616,15.000000},
  {fuseki19537,5,"Fuseki543",580,7.000000},
  {fuseki19538,5,"Fuseki544",492,6.000000},
  {fuseki19539,5,"Fuseki545",429,3.000000},
  {fuseki19540,8,"Fuseki546",431,34.000000},
  {fuseki19541,9,"Fuseki547",467,32.000000},
  {fuseki19542,5,"Fuseki548",506,14.000000},
  {fuseki19543,5,"Fuseki549",460,10.000000},
  {fuseki19544,5,"Fuseki550",903,4.000000},
  {fuseki19545,5,"Fuseki551",530,3.000000},
  {fuseki19546,6,"Fuseki552",945,13.000000},
  {fuseki19547,6,"Fuseki553",901,5.000000},
  {fuseki19548,6,"Fuseki554",946,4.000000},
  {fuseki19549,6,"Fuseki555",421,4.000000},
  {fuseki19550,6,"Fuseki556",492,3.000000},
  {fuseki19551,6,"Fuseki557",421,2.000000},
  {fuseki19552,3,"Fuseki558",455,18.000000},
  {fuseki19553,3,"Fuseki559",418,12.000000},
  {fuseki19554,3,"Fuseki560",912,2.000000},
  {fuseki19555,4,"Fuseki561",456,12.000000},
  {fuseki19556,4,"Fuseki562",764,6.000000},
  {fuseki19557,4,"Fuseki563",876,6.000000},
  {fuseki19558,4,"Fuseki564",422,3.000000},
  {fuseki19559,4,"Fuseki565",431,3.000000},
  {fuseki19560,2,"Fuseki566",948,12.000000},
  {fuseki19561,2,"Fuseki567",911,8.000000},
  {fuseki19562,2,"Fuseki568",913,3.000000},
  {fuseki19563,2,"Fuseki569",543,3.000000},
  {fuseki19564,2,"Fuseki570",948,2.000000},
  {fuseki19565,6,"Fuseki571",432,14.000000},
  {fuseki19566,6,"Fuseki572",503,13.000000},
  {fuseki19567,6,"Fuseki573",429,6.000000},
  {fuseki19568,4,"Fuseki574",678,9.000000},
  {fuseki19569,4,"Fuseki575",467,8.000000},
  {fuseki19570,4,"Fuseki576",431,5.000000},
  {fuseki19571,4,"Fuseki577",467,3.000000},
  {fuseki19572,4,"Fuseki578",906,2.000000},
  {fuseki19573,4,"Fuseki579",948,2.000000},
  {fuseki19574,7,"Fuseki580",939,15.000000},
  {fuseki19575,7,"Fuseki581",691,9.000000},
  {fuseki19576,7,"Fuseki582",825,4.000000},
  {fuseki19577,7,"Fuseki583",529,2.000000},
  {fuseki19578,4,"Fuseki584",420,13.000000},
  {fuseki19579,4,"Fuseki586",543,4.000000},
  {fuseki19580,4,"Fuseki587",825,3.000000},
  {fuseki19581,4,"Fuseki588",684,2.000000},
  {fuseki19582,5,"Fuseki589",825,23.000000},
  {fuseki19583,5,"Fuseki590",462,3.000000},
  {fuseki19584,3,"Fuseki591",456,20.000000},
  {fuseki19585,3,"Fuseki592",913,6.000000},
  {fuseki19586,3,"Fuseki593",901,2.000000},
  {fuseki19587,8,"Fuseki594",495,30.000000},
  {fuseki19588,4,"Fuseki595",938,13.000000},
  {fuseki19589,4,"Fuseki596",505,7.000000},
  {fuseki19590,4,"Fuseki597",825,4.000000},
  {fuseki19591,4,"Fuseki598",421,2.000000},
  {fuseki19592,4,"Fuseki599",863,2.000000},
  {fuseki19593,6,"Fuseki600",911,17.000000},
  {fuseki19594,6,"Fuseki601",690,4.000000},
  {fuseki19595,6,"Fuseki602",875,4.000000},
  {fuseki19596,3,"Fuseki603",493,16.000000},
  {fuseki19597,3,"Fuseki604",457,6.000000},
  {fuseki19598,3,"Fuseki605",468,2.000000},
  {fuseki19599,3,"Fuseki606",455,2.000000},
  {fuseki19600,3,"Fuseki607",506,2.000000},
  {fuseki19601,6,"Fuseki608",902,12.000000},
  {fuseki19602,6,"Fuseki609",751,6.000000},
  {fuseki19603,6,"Fuseki610",714,6.000000},
  {fuseki19604,6,"Fuseki611",462,3.000000},
  {fuseki19605,6,"Fuseki612",904,2.000000},
  {fuseki19606,9,"Fuseki613",531,29.000000},
  {fuseki19607,6,"Fuseki614",462,16.000000},
  {fuseki19608,6,"Fuseki615",429,11.000000},
  {fuseki19609,8,"Fuseki617",503,3.000000},
  {fuseki19610,6,"Fuseki618",432,20.000000},
  {fuseki19611,6,"Fuseki619",460,3.000000},
  {fuseki19612,6,"Fuseki620",604,2.000000},
  {fuseki19613,6,"Fuseki621",945,2.000000},
  {fuseki19614,6,"Fuseki622",678,22.000000},
  {fuseki19615,6,"Fuseki623",470,4.000000},
  {fuseki19616,6,"Fuseki624",531,3.000000},
  {fuseki19617,4,"Fuseki625",467,10.000000},
  {fuseki19618,4,"Fuseki626",420,5.000000},
  {fuseki19619,4,"Fuseki627",905,3.000000},
  {fuseki19620,4,"Fuseki628",506,2.000000},
  {fuseki19621,4,"Fuseki629",567,2.000000},
  {fuseki19622,4,"Fuseki630",944,2.000000},
  {fuseki19623,2,"Fuseki631",912,11.000000},
  {fuseki19624,2,"Fuseki632",468,6.000000},
  {fuseki19625,2,"Fuseki633",913,5.000000},
  {fuseki19626,2,"Fuseki634",456,7.000000},
  {fuseki19627,2,"Fuseki635",913,6.000000},
  {fuseki19628,2,"Fuseki636",468,5.000000},
  {fuseki19629,2,"Fuseki637",949,4.000000},
  {fuseki19630,2,"Fuseki638",949,3.000000},
  {fuseki19631,2,"Fuseki639",420,2.000000},
  {fuseki19632,7,"Fuseki640",909,29.000000},
  {fuseki19633,8,"Fuseki641",455,26.000000},
  {fuseki19634,8,"Fuseki642",899,3.000000},
  {fuseki19635,2,"Fuseki643",457,10.000000},
  {fuseki19636,2,"Fuseki644",493,5.000000},
  {fuseki19637,2,"Fuseki645",419,3.000000},
  {fuseki19638,2,"Fuseki646",948,3.000000},
  {fuseki19639,2,"Fuseki647",468,2.000000},
  {fuseki19640,7,"Fuseki648",801,28.000000},
  {fuseki19641,3,"Fuseki650",913,9.000000},
  {fuseki19642,3,"Fuseki651",456,9.000000},
  {fuseki19643,3,"Fuseki652",506,4.000000},
  {fuseki19644,3,"Fuseki653",493,2.000000},
  {fuseki19645,3,"Fuseki654",493,2.000000},
  {fuseki19646,5,"Fuseki655",543,17.000000},
  {fuseki19647,5,"Fuseki656",941,2.000000},
  {fuseki19648,5,"Fuseki657",826,2.000000},
  {fuseki19649,5,"Fuseki658",902,2.000000},
  {fuseki19650,3,"Fuseki659",913,9.000000},
  {fuseki19651,3,"Fuseki660",456,9.000000},
  {fuseki19652,3,"Fuseki661",949,3.000000},
  {fuseki19653,3,"Fuseki662",420,3.000000},
  {fuseki19654,3,"Fuseki663",950,2.000000},
  {fuseki19655,7,"Fuseki664",458,17.000000},
  {fuseki19656,7,"Fuseki665",429,10.000000},
  {fuseki19657,2,"Fuseki666",456,6.000000},
  {fuseki19658,2,"Fuseki667",941,3.000000},
  {fuseki19659,2,"Fuseki668",912,3.000000},
  {fuseki19660,2,"Fuseki669",826,3.000000},
  {fuseki19661,2,"Fuseki670",939,3.000000},
  {fuseki19662,2,"Fuseki672",838,2.000000},
  {fuseki19663,3,"Fuseki673",912,7.000000},
  {fuseki19664,3,"Fuseki674",455,4.000000},
  {fuseki19665,3,"Fuseki675",913,3.000000},
  {fuseki19666,3,"Fuseki676",876,3.000000},
  {fuseki19667,3,"Fuseki677",506,2.000000},
  {fuseki19668,3,"Fuseki678",875,2.000000},
  {fuseki19669,3,"Fuseki680",457,2.000000},
  {fuseki19670,3,"Fuseki681",937,14.000000},
  {fuseki19671,3,"Fuseki682",912,6.000000},
  {fuseki19672,3,"Fuseki683",493,4.000000},
  {fuseki19673,6,"Fuseki684",567,17.000000},
  {fuseki19674,6,"Fuseki685",948,4.000000},
  {fuseki19675,6,"Fuseki686",873,2.000000},
  {fuseki19676,6,"Fuseki687",911,15.000000},
  {fuseki19677,6,"Fuseki688",875,3.000000},
  {fuseki19678,6,"Fuseki689",690,3.000000},
  {fuseki19679,3,"Fuseki690",912,13.000000},
  {fuseki19680,3,"Fuseki691",913,5.000000},
  {fuseki19681,3,"Fuseki692",949,3.000000},
  {fuseki19682,3,"Fuseki693",506,2.000000},
  {fuseki19683,3,"Fuseki694",901,2.000000},
  {fuseki19684,7,"Fuseki695",690,18.000000},
  {fuseki19685,7,"Fuseki696",914,7.000000},
  {fuseki19686,5,"Fuseki697",839,7.000000},
  {fuseki19687,5,"Fuseki698",906,5.000000},
  {fuseki19688,5,"Fuseki699",425,4.000000},
  {fuseki19689,5,"Fuseki700",682,3.000000},
  {fuseki19690,5,"Fuseki701",906,2.000000},
  {fuseki19691,5,"Fuseki702",462,2.000000},
  {fuseki19692,7,"Fuseki703",939,18.000000},
  {fuseki19693,7,"Fuseki704",940,8.000000},
  {fuseki19694,9,"Fuseki705",419,26.000000},
  {fuseki19695,3,"Fuseki706",469,7.000000},
  {fuseki19696,3,"Fuseki707",506,5.000000},
  {fuseki19697,3,"Fuseki708",468,5.000000},
  {fuseki19698,3,"Fuseki709",458,3.000000},
  {fuseki19699,3,"Fuseki710",467,2.000000},
  {fuseki19700,3,"Fuseki711",506,2.000000},
  {fuseki19701,3,"Fuseki712",911,2.000000},
  {fuseki19702,9,"Fuseki713",911,16.000000},
  {fuseki19703,9,"Fuseki715",913,2.000000},
  {fuseki19704,9,"Fuseki716",604,2.000000},
  {fuseki19705,4,"Fuseki717",906,12.000000},
  {fuseki19706,4,"Fuseki718",457,7.000000},
  {fuseki19707,4,"Fuseki719",456,2.000000},
  {fuseki19708,6,"Fuseki720",429,8.000000},
  {fuseki19709,6,"Fuseki721",950,7.000000},
  {fuseki19710,6,"Fuseki722",470,4.000000},
  {fuseki19711,6,"Fuseki723",873,2.000000},
  {fuseki19712,6,"Fuseki724",838,2.000000},
  {fuseki19713,9,"Fuseki725",901,16.000000},
  {fuseki19714,9,"Fuseki726",763,5.000000},
  {fuseki19715,9,"Fuseki727",428,2.000000},
  {fuseki19716,9,"Fuseki728",904,2.000000},
  {fuseki19717,4,"Fuseki729",469,20.000000},
  {fuseki19718,4,"Fuseki730",468,3.000000},
  {fuseki19719,9,"Fuseki731",529,22.000000},
  {fuseki19720,2,"Fuseki732",948,8.000000},
  {fuseki19721,2,"Fuseki733",911,6.000000},
  {fuseki19722,2,"Fuseki734",457,3.000000},
  {fuseki19723,2,"Fuseki735",469,2.000000},
  {fuseki19724,5,"Fuseki736",616,7.000000},
  {fuseki19725,5,"Fuseki737",430,5.000000},
  {fuseki19726,5,"Fuseki738",948,4.000000},
  {fuseki19727,5,"Fuseki739",542,3.000000},
  {fuseki19728,5,"Fuseki740",580,3.000000},
  {fuseki19729,6,"Fuseki741",495,12.000000},
  {fuseki19730,6,"Fuseki742",950,10.000000},
  {fuseki19731,7,"Fuseki743",950,8.000000},
  {fuseki19732,7,"Fuseki744",788,5.000000},
  {fuseki19733,7,"Fuseki745",839,5.000000},
  {fuseki19734,7,"Fuseki746",603,2.000000},
  {fuseki19735,7,"Fuseki747",825,2.000000},
  {fuseki19736,4,"Fuseki748",505,13.000000},
  {fuseki19737,4,"Fuseki749",430,5.000000},
  {fuseki19738,4,"Fuseki750",944,3.000000},
  {fuseki19739,5,"Fuseki751",653,13.000000},
  {fuseki19740,5,"Fuseki752",429,3.000000},
  {fuseki19741,5,"Fuseki753",690,2.000000},
  {fuseki19742,5,"Fuseki754",939,10.000000},
  {fuseki19743,5,"Fuseki755",839,6.000000},
  {fuseki19744,5,"Fuseki756",431,4.000000},
  {fuseki19745,5,"Fuseki757",944,3.000000},
  {fuseki19746,4,"Fuseki758",543,13.000000},
  {fuseki19747,4,"Fuseki759",839,4.000000},
  {fuseki19748,6,"Fuseki760",751,6.000000},
  {fuseki19749,6,"Fuseki761",902,5.000000},
  {fuseki19750,6,"Fuseki762",530,5.000000},
  {fuseki19751,6,"Fuseki763",906,2.000000},
  {fuseki19752,6,"Fuseki764",902,16.000000},
  {fuseki19753,6,"Fuseki765",427,5.000000},
  {fuseki19754,5,"Fuseki766",458,6.000000},
  {fuseki19755,5,"Fuseki767",677,5.000000},
  {fuseki19756,5,"Fuseki768",421,4.000000},
  {fuseki19757,5,"Fuseki769",467,2.000000},
  {fuseki19758,5,"Fuseki770",825,2.000000},
  {fuseki19759,5,"Fuseki771",904,7.000000},
  {fuseki19760,5,"Fuseki772",420,4.000000},
  {fuseki19761,5,"Fuseki773",428,3.000000},
  {fuseki19762,5,"Fuseki774",421,2.000000},
  {fuseki19763,5,"Fuseki775",864,2.000000},
  {fuseki19764,3,"Fuseki776",456,8.000000},
  {fuseki19765,3,"Fuseki777",468,7.000000},
  {fuseki19766,3,"Fuseki778",678,3.000000},
  {fuseki19767,3,"Fuseki779",900,3.000000},
  {fuseki19768,6,"Fuseki780",429,7.000000},
  {fuseki19769,6,"Fuseki781",936,6.000000},
  {fuseki19770,6,"Fuseki782",541,5.000000},
  {fuseki19771,6,"Fuseki783",904,2.000000},
  {fuseki19772,6,"Fuseki784",429,8.000000},
  {fuseki19773,6,"Fuseki785",543,5.000000},
  {fuseki19774,6,"Fuseki786",529,5.000000},
  {fuseki19775,4,"Fuseki787",876,8.000000},
  {fuseki19776,4,"Fuseki788",468,4.000000},
  {fuseki19777,4,"Fuseki789",908,3.000000},
  {fuseki19778,4,"Fuseki790",431,2.000000},
  {fuseki19779,4,"Fuseki791",566,2.000000},
  {fuseki19780,4,"Fuseki792",838,2.000000},
  {fuseki19781,3,"Fuseki793",912,5.000000},
  {fuseki19782,3,"Fuseki794",466,4.000000},
  {fuseki19783,3,"Fuseki795",542,3.000000},
  {fuseki19784,3,"Fuseki796",653,2.000000},
  {fuseki19785,3,"Fuseki797",876,2.000000},
  {fuseki19786,3,"Fuseki798",429,2.000000},
  {fuseki19787,3,"Fuseki799",617,2.000000},
  {fuseki19788,5,"Fuseki800",911,13.000000},
  {fuseki19789,5,"Fuseki801",943,3.000000},
  {fuseki19790,5,"Fuseki802",947,2.000000},
  {fuseki19791,7,"Fuseki803",939,10.000000},
  {fuseki19792,7,"Fuseki804",429,7.000000},
  {fuseki19793,3,"Fuseki805",456,13.000000},
  {fuseki19794,3,"Fuseki806",469,4.000000},
  {fuseki19795,9,"Fuseki807",947,13.000000},
  {fuseki19796,9,"Fuseki808",429,5.000000},
  {fuseki19797,9,"Fuseki809",939,2.000000},
  {fuseki19798,8,"Fuseki810",654,21.000000},
  {fuseki19799,4,"Fuseki811",938,9.000000},
  {fuseki19800,4,"Fuseki812",947,8.000000},
  {fuseki19801,4,"Fuseki813",947,2.000000},
  {fuseki19802,7,"Fuseki814",939,14.000000},
  {fuseki19803,7,"Fuseki815",912,6.000000},
  {fuseki19804,3,"Fuseki816",616,7.000000},
  {fuseki19805,3,"Fuseki817",949,4.000000},
  {fuseki19806,3,"Fuseki818",874,2.000000},
  {fuseki19807,3,"Fuseki819",456,2.000000},
  {fuseki19808,2,"Fuseki820",431,10.000000},
  {fuseki19809,2,"Fuseki821",912,3.000000},
  {fuseki19810,2,"Fuseki822",949,3.000000},
  {fuseki19811,2,"Fuseki823",455,2.000000},
  {fuseki19812,8,"Fuseki824",431,20.000000},
  {fuseki19813,9,"Fuseki825",507,17.000000},
  {fuseki19814,9,"Fuseki826",380,2.000000},
  {fuseki19815,5,"Fuseki827",493,12.000000},
  {fuseki19816,5,"Fuseki828",910,2.000000},
  {fuseki19817,5,"Fuseki829",948,2.000000},
  {fuseki19818,5,"Fuseki830",902,2.000000},
  {fuseki19819,7,"Fuseki831",433,20.000000},
  {fuseki19820,7,"Fuseki832",429,7.000000},
  {fuseki19821,7,"Fuseki833",839,5.000000},
  {fuseki19822,7,"Fuseki834",691,3.000000},
  {fuseki19823,7,"Fuseki835",974,2.000000},
  {fuseki19824,3,"Fuseki836",468,11.000000},
  {fuseki19825,3,"Fuseki837",455,8.000000},
  {fuseki19826,6,"Fuseki838",531,9.000000},
  {fuseki19827,6,"Fuseki839",432,6.000000},
  {fuseki19828,6,"Fuseki840",429,4.000000},
  {fuseki19829,4,"Fuseki841",468,7.000000},
  {fuseki19830,4,"Fuseki842",420,4.000000},
  {fuseki19831,4,"Fuseki844",690,2.000000},
  {fuseki19832,4,"Fuseki845",543,12.000000},
  {fuseki19833,4,"Fuseki846",424,3.000000},
  {fuseki19834,4,"Fuseki847",419,2.000000},
  {fuseki19835,4,"Fuseki848",457,9.000000},
  {fuseki19836,4,"Fuseki849",420,9.000000},
  {fuseki19837,5,"Fuseki850",543,10.000000},
  {fuseki19838,5,"Fuseki851",466,6.000000},
  {fuseki19839,3,"Fuseki852",468,14.000000},
  {fuseki19840,3,"Fuseki853",948,2.000000},
  {fuseki19841,3,"Fuseki854",419,2.000000},
  {fuseki19842,7,"Fuseki855",950,12.000000},
  {fuseki19843,7,"Fuseki856",947,4.000000},
  {fuseki19844,7,"Fuseki857",837,2.000000},
  {fuseki19845,6,"Fuseki858",394,14.000000},
  {fuseki19846,6,"Fuseki859",421,2.000000},
  {fuseki19847,6,"Fuseki860",653,2.000000},
  {fuseki19848,4,"Fuseki861",492,10.000000},
  {fuseki19849,4,"Fuseki862",939,8.000000},
  {fuseki19850,7,"Fuseki863",529,14.000000},
  {fuseki19851,7,"Fuseki864",566,4.000000},
  {fuseki19852,6,"Fuseki865",458,11.000000},
  {fuseki19853,6,"Fuseki866",495,3.000000},
  {fuseki19854,6,"Fuseki867",494,2.000000},
  {fuseki19855,6,"Fuseki868",690,8.000000},
  {fuseki19856,6,"Fuseki869",653,5.000000},
  {fuseki19857,6,"Fuseki870",944,2.000000},
  {fuseki19858,8,"Fuseki871",911,10.000000},
  {fuseki19859,8,"Fuseki872",949,6.000000},
  {fuseki19860,4,"Fuseki873",906,7.000000},
  {fuseki19861,4,"Fuseki874",457,3.000000},
  {fuseki19862,4,"Fuseki875",505,2.000000},
  {fuseki19863,4,"Fuseki876",469,2.000000},
  {fuseki19864,5,"Fuseki877",839,6.000000},
  {fuseki19865,5,"Fuseki878",939,6.000000},
  {fuseki19866,5,"Fuseki879",862,2.000000},
  {fuseki19867,5,"Fuseki880",906,2.000000},
  {fuseki19868,3,"Fuseki881",906,5.000000},
  {fuseki19869,3,"Fuseki882",425,3.000000},
  {fuseki19870,3,"Fuseki883",462,2.000000},
  {fuseki19871,3,"Fuseki884",506,2.000000},
  {fuseki19872,3,"Fuseki885",505,2.000000},
  {fuseki19873,3,"Fuseki886",678,2.000000},
  {fuseki19874,6,"Fuseki887",902,8.000000},
  {fuseki19875,6,"Fuseki888",751,5.000000},
  {fuseki19876,6,"Fuseki889",715,2.000000},
  {fuseki19877,8,"Fuseki890",678,10.000000},
  {fuseki19878,8,"Fuseki891",425,3.000000},
  {fuseki19879,8,"Fuseki892",947,2.000000},
  {fuseki19880,7,"Fuseki893",469,15.000000},
  {fuseki19881,7,"Fuseki894",469,3.000000},
  {fuseki19882,8,"Fuseki895",941,9.000000},
  {fuseki19883,8,"Fuseki896",826,5.000000},
  {fuseki19884,8,"Fuseki897",429,3.000000},
  {fuseki19885,7,"Fuseki898",898,7.000000},
  {fuseki19886,7,"Fuseki899",906,7.000000},
  {fuseki19887,7,"Fuseki900",715,2.000000},
  {fuseki19888,4,"Fuseki901",456,5.000000},
  {fuseki19889,4,"Fuseki902",419,4.000000},
  {fuseki19890,4,"Fuseki903",911,2.000000},
  {fuseki19891,4,"Fuseki904",802,2.000000},
  {fuseki19892,7,"Fuseki905",690,17.000000},
  {fuseki19893,4,"Fuseki906",543,9.000000},
  {fuseki19894,4,"Fuseki907",947,3.000000},
  {fuseki19895,7,"Fuseki908",678,14.000000},
  {fuseki19896,7,"Fuseki909",715,3.000000},
  {fuseki19897,7,"Fuseki910",906,10.000000},
  {fuseki19898,7,"Fuseki911",421,5.000000},
  {fuseki19899,8,"Fuseki912",529,9.000000},
  {fuseki19900,8,"Fuseki913",678,6.000000},
  {fuseki19901,7,"Fuseki914",494,16.000000},
  {fuseki19902,8,"Fuseki915",910,15.000000},
  {fuseki19903,6,"Fuseki916",940,8.000000},
  {fuseki19904,6,"Fuseki917",429,7.000000},
  {fuseki19905,6,"Fuseki918",941,2.000000},
  {fuseki19906,6,"Fuseki919",898,12.000000},
  {fuseki19907,6,"Fuseki920",947,2.000000},
  {fuseki19908,3,"Fuseki921",937,5.000000},
  {fuseki19909,3,"Fuseki922",456,4.000000},
  {fuseki19910,3,"Fuseki923",467,2.000000},
  {fuseki19911,3,"Fuseki924",418,2.000000},
  {fuseki19912,8,"Fuseki925",461,10.000000},
  {fuseki19913,8,"Fuseki926",533,4.000000},
  {fuseki19914,8,"Fuseki927",986,2.000000},
  {fuseki19915,6,"Fuseki928",394,15.000000},
  {fuseki19916,5,"Fuseki929",690,6.000000},
  {fuseki19917,5,"Fuseki930",429,3.000000},
  {fuseki19918,5,"Fuseki931",466,3.000000},
  {fuseki19919,8,"Fuseki932",495,16.000000},
  {fuseki19920,7,"Fuseki933",678,12.000000},
  {fuseki19921,7,"Fuseki934",470,4.000000},
  {fuseki19922,9,"Fuseki935",531,16.000000},
  {fuseki19923,4,"Fuseki936",678,5.000000},
  {fuseki19924,4,"Fuseki937",691,3.000000},
  {fuseki19925,4,"Fuseki938",419,3.000000},
  {fuseki19926,8,"Fuseki939",715,15.000000},
  {fuseki19927,5,"Fuseki940",908,7.000000},
  {fuseki19928,5,"Fuseki941",874,3.000000},
  {fuseki19929,5,"Fuseki942",420,2.000000},
  {fuseki19930,5,"Fuseki943",802,2.000000},
  {fuseki19931,5,"Fuseki944",838,5.000000},
  {fuseki19932,5,"Fuseki945",617,4.000000},
  {fuseki19933,5,"Fuseki946",529,3.000000},
  {fuseki19934,5,"Fuseki947",690,2.000000},
  {fuseki19935,5,"Fuseki948",461,2.000000},
  {fuseki19936,7,"Fuseki949",947,9.000000},
  {fuseki19937,7,"Fuseki950",943,4.000000},
  {fuseki19938,9,"Fuseki951",467,15.000000},
  {fuseki19939,5,"Fuseki952",910,7.000000},
  {fuseki19940,5,"Fuseki953",421,5.000000},
  {fuseki19941,5,"Fuseki954",948,2.000000},
  {fuseki19942,6,"Fuseki955",690,12.000000},
  {fuseki19943,6,"Fuseki956",394,2.000000},
  {fuseki19944,3,"Fuseki957",912,10.000000},
  {fuseki19945,3,"Fuseki958",455,2.000000},
  {fuseki19946,7,"Fuseki959",432,13.000000},
  {fuseki19947,6,"Fuseki960",418,7.000000},
  {fuseki19948,6,"Fuseki961",495,4.000000},
  {fuseki19949,6,"Fuseki962",429,2.000000},
  {fuseki19950,5,"Fuseki963",429,6.000000},
  {fuseki19951,5,"Fuseki964",653,3.000000},
  {fuseki19952,5,"Fuseki965",617,2.000000},
  {fuseki19953,5,"Fuseki966",542,2.000000},
  {fuseki19954,4,"Fuseki967",493,7.000000},
  {fuseki19955,4,"Fuseki968",640,3.000000},
  {fuseki19956,4,"Fuseki969",938,2.000000},
  {fuseki19957,8,"Fuseki970",604,11.000000},
  {fuseki19958,8,"Fuseki971",864,2.000000},
  {fuseki19959,7,"Fuseki972",690,14.000000},
  {fuseki19960,6,"Fuseki973",465,6.000000},
  {fuseki19961,6,"Fuseki974",503,6.000000},
  {fuseki19962,6,"Fuseki975",430,2.000000},
  {fuseki19963,4,"Fuseki976",420,10.000000},
  {fuseki19964,4,"Fuseki977",505,2.000000},
  {fuseki19965,3,"Fuseki978",456,7.000000},
  {fuseki19966,3,"Fuseki979",456,6.000000},
  {fuseki19967,3,"Fuseki980",949,2.000000},
  {fuseki19968,7,"Fuseki981",491,6.000000},
  {fuseki19969,7,"Fuseki982",456,5.000000},
  {fuseki19970,7,"Fuseki983",467,4.000000},
  {fuseki19971,9,"Fuseki984",753,15.000000},
  {fuseki19972,2,"Fuseki985",913,4.000000},
  {fuseki19973,9,"Fuseki989",727,14.000000},
  {fuseki19974,8,"Fuseki990",941,5.000000},
  {fuseki19975,8,"Fuseki991",907,4.000000},
  {fuseki19976,8,"Fuseki992",838,3.000000},
  {fuseki19977,5,"Fuseki993",728,5.000000},
  {fuseki19978,5,"Fuseki994",911,3.000000},
  {fuseki19979,5,"Fuseki995",460,3.000000},
  {fuseki19980,5,"Fuseki996",566,2.000000},
  {fuseki19981,8,"Fuseki997",431,15.000000},
  {fuseki19982,7,"Fuseki998",466,13.000000},
  {fuseki19983,7,"Fuseki999",529,6.000000},
  {fuseki19984,2,"Fuseki1001",912,2005.000000},
  {fuseki19985,2,"Fuseki1002",455,1366.000000},
  {fuseki19986,2,"Fuseki1003",875,536.000000},
  {fuseki19987,2,"Fuseki1004",948,263.000000},
  {fuseki19988,2,"Fuseki1005",684,86.000000},
  {fuseki19989,2,"Fuseki1006",429,31.000000},
  {fuseki19990,2,"Fuseki1007",950,27.000000},
  {fuseki19991,2,"Fuseki1010",542,10.000000},
  {fuseki19992,3,"Fuseki1011",912,996.000000},
  {fuseki19993,3,"Fuseki1012",949,713.000000},
  {fuseki19994,3,"Fuseki1013",911,410.000000},
  {fuseki19995,3,"Fuseki1014",948,258.000000},
  {fuseki19996,3,"Fuseki1015",684,45.000000},
  {fuseki19997,3,"Fuseki1017",543,17.000000},
  {fuseki19998,3,"Fuseki1019",950,15.000000},
  {fuseki19999,3,"Fuseki1020",429,14.000000},
  {fuseki191000,3,"Fuseki1021",421,13.000000},
  {fuseki191001,3,"Fuseki1022",456,1088.000000},
  {fuseki191002,3,"Fuseki1023",419,571.000000},
  {fuseki191003,3,"Fuseki1024",839,82.000000},
  {fuseki191004,3,"Fuseki1025",420,67.000000},
  {fuseki191005,3,"Fuseki1026",875,56.000000},
  {fuseki191006,3,"Fuseki1027",684,56.000000},
  {fuseki191007,3,"Fuseki1028",950,51.000000},
  {fuseki191008,4,"Fuseki1029",543,1365.000000},
  {fuseki191009,4,"Fuseki1030",943,54.000000},
  {fuseki191010,4,"Fuseki1031",684,49.000000},
  {fuseki191011,4,"Fuseki1032",903,47.000000},
  {fuseki191012,4,"Fuseki1033",940,34.000000},
  {fuseki191013,4,"Fuseki1034",542,29.000000},
  {fuseki191014,4,"Fuseki1035",906,17.000000},
  {fuseki191015,3,"Fuseki1037",456,620.000000},
  {fuseki191016,3,"Fuseki1038",457,196.000000},
  {fuseki191017,3,"Fuseki1039",913,180.000000},
  {fuseki191018,3,"Fuseki1040",419,180.000000},
  {fuseki191019,3,"Fuseki1041",876,52.000000},
  {fuseki191020,3,"Fuseki1042",950,27.000000},
  {fuseki191021,3,"Fuseki1043",684,26.000000},
  {fuseki191022,3,"Fuseki1044",420,17.000000},
  {fuseki191023,3,"Fuseki1045",493,16.000000},
  {fuseki191024,3,"Fuseki1046",492,13.000000},
  {fuseki191025,3,"Fuseki1047",947,10.000000},
  {fuseki191026,5,"Fuseki1048",466,470.000000},
  {fuseki191027,5,"Fuseki1049",825,260.000000},
  {fuseki191028,5,"Fuseki1050",941,202.000000},
  {fuseki191029,5,"Fuseki1051",906,83.000000},
  {fuseki191030,5,"Fuseki1052",905,76.000000},
  {fuseki191031,5,"Fuseki1053",458,67.000000},
  {fuseki191032,5,"Fuseki1054",788,37.000000},
  {fuseki191033,5,"Fuseki1055",691,37.000000},
  {fuseki191034,5,"Fuseki1056",938,33.000000},
  {fuseki191035,5,"Fuseki1057",906,17.000000},
  {fuseki191036,5,"Fuseki1058",678,12.000000},
  {fuseki191037,5,"Fuseki1059",684,12.000000},
  {fuseki191038,5,"Fuseki1060",690,10.000000},
  {fuseki191039,4,"Fuseki1061",939,600.000000},
  {fuseki191040,4,"Fuseki1062",529,300.000000},
  {fuseki191041,4,"Fuseki1063",429,87.000000},
  {fuseki191042,4,"Fuseki1064",677,25.000000},
  {fuseki191043,4,"Fuseki1065",826,19.000000},
  {fuseki191044,4,"Fuseki1067",947,604.000000},
  {fuseki191045,4,"Fuseki1068",462,175.000000},
  {fuseki191046,4,"Fuseki1069",684,53.000000},
  {fuseki191047,4,"Fuseki1070",906,42.000000},
  {fuseki191048,4,"Fuseki1071",691,24.000000},
  {fuseki191049,4,"Fuseki1072",838,22.000000},
  {fuseki191050,4,"Fuseki1073",677,19.000000},
  {fuseki191051,4,"Fuseki1074",543,11.000000},
  {fuseki191052,4,"Fuseki1075",802,10.000000},
  {fuseki191053,5,"Fuseki1076",529,670.000000},
  {fuseki191054,5,"Fuseki1077",677,22.000000},
  {fuseki191055,5,"Fuseki1078",801,19.000000},
  {fuseki191056,5,"Fuseki1079",788,14.000000},
  {fuseki191057,5,"Fuseki1080",906,14.000000},
  {fuseki191058,5,"Fuseki1081",542,12.000000},
  {fuseki191059,4,"Fuseki1082",875,382.000000},
  {fuseki191060,4,"Fuseki1083",876,144.000000},
  {fuseki191061,4,"Fuseki1084",462,41.000000},
  {fuseki191062,4,"Fuseki1085",947,38.000000},
  {fuseki191063,4,"Fuseki1086",462,30.000000},
  {fuseki191064,4,"Fuseki1087",910,20.000000},
  {fuseki191065,4,"Fuseki1088",684,13.000000},
  {fuseki191066,6,"Fuseki1089",458,246.000000},
  {fuseki191067,6,"Fuseki1090",825,118.000000},
  {fuseki191068,6,"Fuseki1091",603,80.000000},
  {fuseki191069,6,"Fuseki1092",906,51.000000},
  {fuseki191070,6,"Fuseki1093",838,42.000000},
  {fuseki191071,6,"Fuseki1094",905,41.000000},
  {fuseki191072,6,"Fuseki1096",677,20.000000},
  {fuseki191073,6,"Fuseki1097",714,10.000000},
  {fuseki191074,4,"Fuseki1098",939,334.000000},
  {fuseki191075,4,"Fuseki1099",421,76.000000},
  {fuseki191076,4,"Fuseki1100",543,64.000000},
  {fuseki191077,4,"Fuseki1101",421,57.000000},
  {fuseki191078,4,"Fuseki1102",948,26.000000},
  {fuseki191079,4,"Fuseki1103",947,15.000000},
  {fuseki191080,4,"Fuseki1104",429,12.000000},
  {fuseki191081,5,"Fuseki1105",765,132.000000},
  {fuseki191082,5,"Fuseki1106",838,70.000000},
  {fuseki191083,5,"Fuseki1107",907,62.000000},
  {fuseki191084,5,"Fuseki1108",947,54.000000},
  {fuseki191085,5,"Fuseki1109",690,43.000000},
  {fuseki191086,5,"Fuseki1110",939,42.000000},
  {fuseki191087,5,"Fuseki1111",944,34.000000},
  {fuseki191088,5,"Fuseki1112",421,21.000000},
  {fuseki191089,5,"Fuseki1113",838,19.000000},
  {fuseki191090,5,"Fuseki1114",939,18.000000},
  {fuseki191091,5,"Fuseki1115",946,15.000000},
  {fuseki191092,5,"Fuseki1116",943,13.000000},
  {fuseki191093,5,"Fuseki1117",825,12.000000},
  {fuseki191094,5,"Fuseki1118",429,10.000000},
  {fuseki191095,5,"Fuseki1119",466,191.000000},
  {fuseki191096,5,"Fuseki1120",825,119.000000},
  {fuseki191097,5,"Fuseki1121",617,63.000000},
  {fuseki191098,5,"Fuseki1122",653,49.000000},
  {fuseki191099,5,"Fuseki1123",839,36.000000},
  {fuseki191100,5,"Fuseki1124",690,26.000000},
  {fuseki191101,5,"Fuseki1125",542,22.000000},
  {fuseki191102,5,"Fuseki1126",788,17.000000},
  {fuseki191103,5,"Fuseki1127",906,17.000000},
  {fuseki191104,5,"Fuseki1128",942,11.000000},
  {fuseki191105,4,"Fuseki1129",493,294.000000},
  {fuseki191106,4,"Fuseki1130",876,74.000000},
  {fuseki191107,4,"Fuseki1131",939,69.000000},
  {fuseki191108,4,"Fuseki1132",939,49.000000},
  {fuseki191109,4,"Fuseki1133",458,24.000000},
  {fuseki191110,4,"Fuseki1134",529,21.000000},
  {fuseki191111,4,"Fuseki1135",825,17.000000},
  {fuseki191112,3,"Fuseki1136",456,232.000000},
  {fuseki191113,3,"Fuseki1137",419,106.000000},
  {fuseki191114,3,"Fuseki1138",419,60.000000},
  {fuseki191115,3,"Fuseki1139",419,23.000000},
  {fuseki191116,3,"Fuseki1140",457,20.000000},
  {fuseki191117,3,"Fuseki1141",418,16.000000},
  {fuseki191118,3,"Fuseki1142",420,11.000000},
  {fuseki191119,3,"Fuseki1143",493,10.000000},
  {fuseki191120,6,"Fuseki1144",839,355.000000},
  {fuseki191121,6,"Fuseki1145",939,50.000000},
  {fuseki191122,6,"Fuseki1146",677,14.000000},
  {fuseki191123,6,"Fuseki1147",690,12.000000},
  {fuseki191124,6,"Fuseki1148",789,11.000000},
  {fuseki191125,6,"Fuseki1149",903,11.000000},
  {fuseki191126,6,"Fuseki1150",825,127.000000},
  {fuseki191127,6,"Fuseki1151",909,50.000000},
  {fuseki191128,6,"Fuseki1152",678,45.000000},
  {fuseki191129,6,"Fuseki1153",470,37.000000},
  {fuseki191130,6,"Fuseki1154",910,34.000000},
  {fuseki191131,6,"Fuseki1155",427,33.000000},
  {fuseki191132,6,"Fuseki1156",947,29.000000},
  {fuseki191133,6,"Fuseki1157",603,27.000000},
  {fuseki191134,6,"Fuseki1158",944,24.000000},
  {fuseki191135,6,"Fuseki1159",421,13.000000},
  {fuseki191136,6,"Fuseki1160",429,10.000000},
  {fuseki191137,4,"Fuseki1161",913,130.000000},
  {fuseki191138,4,"Fuseki1162",462,77.000000},
  {fuseki191139,4,"Fuseki1163",876,40.000000},
  {fuseki191140,4,"Fuseki1164",678,28.000000},
  {fuseki191141,4,"Fuseki1165",690,20.000000},
  {fuseki191142,4,"Fuseki1166",838,18.000000},
  {fuseki191143,4,"Fuseki1167",943,16.000000},
  {fuseki191144,4,"Fuseki1168",684,11.000000},
  {fuseki191145,5,"Fuseki1169",764,138.000000},
  {fuseki191146,5,"Fuseki1170",802,83.000000},
  {fuseki191147,5,"Fuseki1171",876,37.000000},
  {fuseki191148,5,"Fuseki1172",874,26.000000},
  {fuseki191149,5,"Fuseki1173",838,26.000000},
  {fuseki191150,5,"Fuseki1174",543,18.000000},
  {fuseki191151,5,"Fuseki1175",727,15.000000},
  {fuseki191152,5,"Fuseki1176",421,11.000000},
  {fuseki191153,7,"Fuseki1177",458,97.000000},
  {fuseki191154,7,"Fuseki1178",617,48.000000},
  {fuseki191155,7,"Fuseki1179",690,44.000000},
  {fuseki191156,7,"Fuseki1180",429,39.000000},
  {fuseki191157,7,"Fuseki1181",641,31.000000},
  {fuseki191158,7,"Fuseki1182",838,28.000000},
  {fuseki191159,7,"Fuseki1183",506,14.000000},
  {fuseki191160,7,"Fuseki1184",691,13.000000},
  {fuseki191161,5,"Fuseki1185",826,132.000000},
  {fuseki191162,5,"Fuseki1186",543,37.000000},
  {fuseki191163,5,"Fuseki1187",905,35.000000},
  {fuseki191164,5,"Fuseki1188",427,33.000000},
  {fuseki191165,5,"Fuseki1189",911,29.000000},
  {fuseki191166,5,"Fuseki1190",906,14.000000},
  {fuseki191167,5,"Fuseki1191",492,11.000000},
  {fuseki191168,5,"Fuseki1192",458,73.000000},
  {fuseki191169,5,"Fuseki1193",421,54.000000},
  {fuseki191170,5,"Fuseki1194",603,45.000000},
  {fuseki191171,5,"Fuseki1195",641,39.000000},
  {fuseki191172,5,"Fuseki1196",678,22.000000},
  {fuseki191173,5,"Fuseki1197",458,13.000000},
  {fuseki191174,5,"Fuseki1198",420,9.000000},
  {fuseki191175,5,"Fuseki1199",492,113.000000},
  {fuseki191176,5,"Fuseki1200",530,52.000000},
  {fuseki191177,5,"Fuseki1201",604,41.000000},
  {fuseki191178,5,"Fuseki1202",422,39.000000},
  {fuseki191179,3,"Fuseki1203",456,140.000000},
  {fuseki191180,3,"Fuseki1204",913,30.000000},
  {fuseki191181,3,"Fuseki1205",419,28.000000},
  {fuseki191182,3,"Fuseki1206",913,19.000000},
  {fuseki191183,3,"Fuseki1207",948,11.000000},
  {fuseki191184,6,"Fuseki1208",421,73.000000},
  {fuseki191185,6,"Fuseki1209",690,28.000000},
  {fuseki191186,6,"Fuseki1210",914,24.000000},
  {fuseki191187,6,"Fuseki1211",839,19.000000},
  {fuseki191188,6,"Fuseki1212",542,19.000000},
  {fuseki191189,6,"Fuseki1213",909,16.000000},
  {fuseki191190,6,"Fuseki1214",945,15.000000},
  {fuseki191191,6,"Fuseki1215",944,10.000000},
  {fuseki191192,6,"Fuseki1216",765,8.000000},
  {fuseki191193,6,"Fuseki1217",543,8.000000},
  {fuseki191194,4,"Fuseki1218",949,72.000000},
  {fuseki191195,4,"Fuseki1219",875,53.000000},
  {fuseki191196,4,"Fuseki1220",462,35.000000},
  {fuseki191197,4,"Fuseki1221",462,22.000000},
  {fuseki191198,4,"Fuseki1222",906,13.000000},
  {fuseki191199,7,"Fuseki1225",825,51.000000},
  {fuseki191200,7,"Fuseki1226",579,44.000000},
  {fuseki191201,7,"Fuseki1227",941,29.000000},
  {fuseki191202,7,"Fuseki1228",906,21.000000},
  {fuseki191203,7,"Fuseki1229",466,21.000000},
  {fuseki191204,7,"Fuseki1230",640,15.000000},
  {fuseki191205,7,"Fuseki1231",603,15.000000},
  {fuseki191206,7,"Fuseki1232",839,14.000000},
  {fuseki191207,7,"Fuseki1233",529,9.000000},
  {fuseki191208,7,"Fuseki1234",947,6.000000},
  {fuseki191209,4,"Fuseki1235",543,68.000000},
  {fuseki191210,4,"Fuseki1236",429,60.000000},
  {fuseki191211,4,"Fuseki1237",947,46.000000},
  {fuseki191212,4,"Fuseki1238",529,13.000000},
  {fuseki191213,4,"Fuseki1239",429,12.000000},
  {fuseki191214,4,"Fuseki1240",677,10.000000},
  {fuseki191215,6,"Fuseki1241",865,109.000000},
  {fuseki191216,6,"Fuseki1242",950,28.000000},
  {fuseki191217,6,"Fuseki1243",460,18.000000},
  {fuseki191218,6,"Fuseki1244",947,16.000000},
  {fuseki191219,4,"Fuseki1245",460,67.000000},
  {fuseki191220,4,"Fuseki1246",422,29.000000},
  {fuseki191221,4,"Fuseki1247",948,18.000000},
  {fuseki191222,4,"Fuseki1248",419,18.000000},
  {fuseki191223,4,"Fuseki1249",910,15.000000},
  {fuseki191224,4,"Fuseki1250",419,8.000000},
  {fuseki191225,4,"Fuseki1251",874,7.000000},
  {fuseki191226,6,"Fuseki1252",690,90.000000},
  {fuseki191227,6,"Fuseki1253",974,33.000000},
  {fuseki191228,6,"Fuseki1254",939,18.000000},
  {fuseki191229,6,"Fuseki1255",617,16.000000},
  {fuseki191230,7,"Fuseki1256",529,139.000000},
  {fuseki191231,7,"Fuseki1257",939,15.000000},
  {fuseki191232,4,"Fuseki1258",493,72.000000},
  {fuseki191233,4,"Fuseki1259",948,35.000000},
  {fuseki191234,4,"Fuseki1260",543,32.000000},
  {fuseki191235,4,"Fuseki1261",825,15.000000},
  {fuseki191236,4,"Fuseki1262",457,87.000000},
  {fuseki191237,4,"Fuseki1263",876,41.000000},
  {fuseki191238,4,"Fuseki1264",543,23.000000},
  {fuseki191239,4,"Fuseki1265",825,11.000000},
  {fuseki191240,9,"Fuseki1266",939,130.000000},
  {fuseki191241,9,"Fuseki1267",801,28.000000},
  {fuseki191242,5,"Fuseki1268",543,56.000000},
  {fuseki191243,5,"Fuseki1269",543,50.000000},
  {fuseki191244,5,"Fuseki1270",529,34.000000},
  {fuseki191245,5,"Fuseki1271",908,52.000000},
  {fuseki191246,5,"Fuseki1272",802,27.000000},
  {fuseki191247,5,"Fuseki1273",728,13.000000},
  {fuseki191248,5,"Fuseki1274",907,11.000000},
  {fuseki191249,5,"Fuseki1275",909,10.000000},
  {fuseki191250,5,"Fuseki1276",945,8.000000},
  {fuseki191251,4,"Fuseki1277",939,57.000000},
  {fuseki191252,4,"Fuseki1278",543,34.000000},
  {fuseki191253,4,"Fuseki1279",421,10.000000},
  {fuseki191254,4,"Fuseki1280",677,9.000000},
  {fuseki191255,4,"Fuseki1281",529,7.000000},
  {fuseki191256,4,"Fuseki1282",429,6.000000},
  {fuseki191257,8,"Fuseki1283",902,36.000000},
  {fuseki191258,8,"Fuseki1284",603,18.000000},
  {fuseki191259,8,"Fuseki1285",429,16.000000},
  {fuseki191260,8,"Fuseki1286",641,13.000000},
  {fuseki191261,8,"Fuseki1287",691,11.000000},
  {fuseki191262,8,"Fuseki1288",678,11.000000},
  {fuseki191263,8,"Fuseki1290",455,6.000000},
  {fuseki191264,6,"Fuseki1291",837,41.000000},
  {fuseki191265,6,"Fuseki1292",801,35.000000},
  {fuseki191266,6,"Fuseki1293",950,20.000000},
  {fuseki191267,6,"Fuseki1294",910,12.000000},
  {fuseki191268,6,"Fuseki1295",948,12.000000},
  {fuseki191269,6,"Fuseki1296",872,10.000000},
  {fuseki191270,6,"Fuseki1297",944,60.000000},
  {fuseki191271,6,"Fuseki1298",462,27.000000},
  {fuseki191272,6,"Fuseki1299",907,14.000000},
  {fuseki191273,6,"Fuseki1300",394,8.000000},
  {fuseki191274,6,"Fuseki1301",653,6.000000},
  {fuseki191275,6,"Fuseki1302",950,66.000000},
  {fuseki191276,6,"Fuseki1303",837,58.000000},
  {fuseki191277,5,"Fuseki1304",838,67.000000},
  {fuseki191278,5,"Fuseki1305",801,24.000000},
  {fuseki191279,5,"Fuseki1306",948,13.000000},
  {fuseki191280,5,"Fuseki1307",939,8.000000},
  {fuseki191281,10,"Fuseki1308",902,34.000000},
  {fuseki191282,10,"Fuseki1309",938,31.000000},
  {fuseki191283,10,"Fuseki1310",947,15.000000},
  {fuseki191284,10,"Fuseki1311",530,12.000000},
  {fuseki191285,10,"Fuseki1312",941,11.000000},
  {fuseki191286,10,"Fuseki1313",937,5.000000},
  {fuseki191287,10,"Fuseki1314",865,4.000000},
  {fuseki191288,7,"Fuseki1315",542,44.000000},
  {fuseki191289,7,"Fuseki1316",678,36.000000},
  {fuseki191290,7,"Fuseki1317",617,9.000000},
  {fuseki191291,7,"Fuseki1318",715,8.000000},
  {fuseki191292,7,"Fuseki1319",429,8.000000},
  {fuseki191293,7,"Fuseki1320",943,6.000000},
  {fuseki191294,7,"Fuseki1321",617,5.000000},
  {fuseki191295,6,"Fuseki1322",906,50.000000},
  {fuseki191296,6,"Fuseki1323",470,33.000000},
  {fuseki191297,6,"Fuseki1324",543,14.000000},
  {fuseki191298,6,"Fuseki1325",529,5.000000},
  {fuseki191299,7,"Fuseki1326",947,36.000000},
  {fuseki191300,7,"Fuseki1327",839,10.000000},
  {fuseki191301,7,"Fuseki1328",906,10.000000},
  {fuseki191302,7,"Fuseki1329",382,10.000000},
  {fuseki191303,7,"Fuseki1330",909,9.000000},
  {fuseki191304,7,"Fuseki1331",910,9.000000},
  {fuseki191305,7,"Fuseki1332",424,7.000000},
  {fuseki191306,7,"Fuseki1333",617,6.000000},
  {fuseki191307,7,"Fuseki1334",941,5.000000},
  {fuseki191308,7,"Fuseki1335",543,4.000000},
  {fuseki191309,6,"Fuseki1336",529,95.000000},
  {fuseki191310,6,"Fuseki1337",456,17.000000},
  {fuseki191311,7,"Fuseki1338",826,74.000000},
  {fuseki191312,7,"Fuseki1339",939,24.000000},
  {fuseki191313,4,"Fuseki1340",493,65.000000},
  {fuseki191314,4,"Fuseki1341",420,13.000000},
  {fuseki191315,8,"Fuseki1342",825,45.000000},
  {fuseki191316,8,"Fuseki1343",542,14.000000},
  {fuseki191317,8,"Fuseki1344",567,8.000000},
  {fuseki191318,8,"Fuseki1345",640,7.000000},
  {fuseki191319,8,"Fuseki1346",543,5.000000},
  {fuseki191320,7,"Fuseki1347",455,95.000000},
  {fuseki191321,8,"Fuseki1348",530,44.000000},
  {fuseki191322,8,"Fuseki1349",459,34.000000},
  {fuseki191323,8,"Fuseki1350",543,8.000000},
  {fuseki191324,8,"Fuseki1351",543,7.000000},
  {fuseki191325,7,"Fuseki1352",690,30.000000},
  {fuseki191326,7,"Fuseki1353",839,21.000000},
  {fuseki191327,7,"Fuseki1354",943,13.000000},
  {fuseki191328,7,"Fuseki1355",690,11.000000},
  {fuseki191329,7,"Fuseki1356",462,9.000000},
  {fuseki191330,5,"Fuseki1357",420,41.000000},
  {fuseki191331,5,"Fuseki1358",530,16.000000},
  {fuseki191332,5,"Fuseki1359",460,9.000000},
  {fuseki191333,5,"Fuseki1360",422,8.000000},
  {fuseki191334,5,"Fuseki1361",457,6.000000},
  {fuseki191335,5,"Fuseki1362",543,24.000000},
  {fuseki191336,5,"Fuseki1363",751,19.000000},
  {fuseki191337,5,"Fuseki1364",542,16.000000},
  {fuseki191338,5,"Fuseki1365",580,6.000000},
  {fuseki191339,5,"Fuseki1366",715,6.000000},
  {fuseki191340,5,"Fuseki1367",678,3.000000},
  {fuseki191341,5,"Fuseki1369",902,3.000000},
  {fuseki191342,5,"Fuseki1370",462,3.000000},
  {fuseki191343,3,"Fuseki1371",912,46.000000},
  {fuseki191344,3,"Fuseki1372",913,24.000000},
  {fuseki191345,3,"Fuseki1373",950,6.000000},
  {fuseki191346,6,"Fuseki1374",950,29.000000},
  {fuseki191347,6,"Fuseki1375",837,26.000000},
  {fuseki191348,6,"Fuseki1376",948,6.000000},
  {fuseki191349,6,"Fuseki1378",985,4.000000},
  {fuseki191350,6,"Fuseki1380",838,4.000000},
  {fuseki191351,6,"Fuseki1381",429,37.000000},
  {fuseki191352,6,"Fuseki1382",826,19.000000},
  {fuseki191353,6,"Fuseki1383",865,9.000000},
  {fuseki191354,6,"Fuseki1384",909,4.000000},
  {fuseki191355,6,"Fuseki1385",579,4.000000},
  {fuseki191356,4,"Fuseki1386",456,16.000000},
  {fuseki191357,4,"Fuseki1387",765,13.000000},
  {fuseki191358,4,"Fuseki1388",461,12.000000},
  {fuseki191359,4,"Fuseki1389",947,10.000000},
  {fuseki191360,4,"Fuseki1390",910,7.000000},
  {fuseki191361,4,"Fuseki1391",690,5.000000},
  {fuseki191362,4,"Fuseki1392",728,4.000000},
  {fuseki191363,4,"Fuseki1393",825,4.000000},
  {fuseki191364,4,"Fuseki1394",419,2.000000},
  {fuseki191365,4,"Fuseki1395",764,2.000000},
  {fuseki191366,7,"Fuseki1396",531,31.000000},
  {fuseki191367,7,"Fuseki1397",455,12.000000},
  {fuseki191368,7,"Fuseki1398",936,9.000000},
  {fuseki191369,7,"Fuseki1399",826,5.000000},
  {fuseki191370,7,"Fuseki1400",904,5.000000},
  {fuseki191371,7,"Fuseki1401",529,5.000000},
  {fuseki191372,7,"Fuseki1402",939,4.000000},
  {fuseki191373,5,"Fuseki1403",939,27.000000},
  {fuseki191374,5,"Fuseki1404",543,24.000000},
  {fuseki191375,5,"Fuseki1405",529,15.000000},
  {fuseki191376,5,"Fuseki1406",903,3.000000},
  {fuseki191377,5,"Fuseki1407",825,3.000000},
  {fuseki191378,5,"Fuseki1408",677,3.000000},
  {fuseki191379,8,"Fuseki1409",825,55.000000},
  {fuseki191380,8,"Fuseki1410",903,10.000000},
  {fuseki191381,8,"Fuseki1411",684,10.000000},
  {fuseki191382,5,"Fuseki1412",908,15.000000},
  {fuseki191383,5,"Fuseki1414",530,12.000000},
  {fuseki191384,5,"Fuseki1415",457,8.000000},
  {fuseki191385,5,"Fuseki1416",457,5.000000},
  {fuseki191386,5,"Fuseki1417",422,5.000000},
  {fuseki191387,5,"Fuseki1418",459,4.000000},
  {fuseki191388,5,"Fuseki1419",424,4.000000},
  {fuseki191389,5,"Fuseki1420",603,3.000000},
  {fuseki191390,5,"Fuseki1421",567,3.000000},
  {fuseki191391,5,"Fuseki1423",566,2.000000},
  {fuseki191392,6,"Fuseki1424",865,24.000000},
  {fuseki191393,6,"Fuseki1425",947,20.000000},
  {fuseki191394,6,"Fuseki1426",826,11.000000},
  {fuseki191395,6,"Fuseki1427",936,9.000000},
  {fuseki191396,6,"Fuseki1428",469,3.000000},
  {fuseki191397,6,"Fuseki1429",867,3.000000},
  {fuseki191398,5,"Fuseki1430",529,20.000000},
  {fuseki191399,5,"Fuseki1431",423,14.000000},
  {fuseki191400,5,"Fuseki1432",530,9.000000},
  {fuseki191401,5,"Fuseki1433",461,8.000000},
  {fuseki191402,5,"Fuseki1434",460,4.000000},
  {fuseki191403,5,"Fuseki1435",677,3.000000},
  {fuseki191404,5,"Fuseki1436",462,3.000000},
  {fuseki191405,5,"Fuseki1437",458,3.000000},
  {fuseki191406,5,"Fuseki1438",420,3.000000},
  {fuseki191407,5,"Fuseki1439",802,3.000000},
  {fuseki191408,5,"Fuseki1440",678,2.000000},
  {fuseki191409,5,"Fuseki1441",876,2.000000},
  {fuseki191410,8,"Fuseki1442",463,30.000000},
  {fuseki191411,8,"Fuseki1443",947,8.000000},
  {fuseki191412,8,"Fuseki1444",943,8.000000},
  {fuseki191413,8,"Fuseki1445",941,6.000000},
  {fuseki191414,8,"Fuseki1446",829,6.000000},
  {fuseki191415,8,"Fuseki1447",579,5.000000},
  {fuseki191416,7,"Fuseki1448",429,27.000000},
  {fuseki191417,7,"Fuseki1449",906,16.000000},
  {fuseki191418,7,"Fuseki1450",423,7.000000},
  {fuseki191419,7,"Fuseki1451",765,5.000000},
  {fuseki191420,7,"Fuseki1452",943,5.000000},
  {fuseki191421,7,"Fuseki1453",907,4.000000},
  {fuseki191422,7,"Fuseki1454",910,4.000000},
  {fuseki191423,6,"Fuseki1455",382,26.000000},
  {fuseki191424,6,"Fuseki1456",462,18.000000},
  {fuseki191425,6,"Fuseki1457",603,9.000000},
  {fuseki191426,6,"Fuseki1458",429,8.000000},
  {fuseki191427,5,"Fuseki1459",910,39.000000},
  {fuseki191428,5,"Fuseki1460",939,13.000000},
  {fuseki191429,5,"Fuseki1461",911,9.000000},
  {fuseki191430,5,"Fuseki1462",420,24.000000},
  {fuseki191431,5,"Fuseki1463",460,14.000000},
  {fuseki191432,5,"Fuseki1464",566,11.000000},
  {fuseki191433,5,"Fuseki1465",458,9.000000},
  {fuseki191434,5,"Fuseki1466",911,3.000000},
  {fuseki191435,6,"Fuseki1467",986,31.000000},
  {fuseki191436,6,"Fuseki1468",906,22.000000},
  {fuseki191437,6,"Fuseki1469",727,7.000000},
  {fuseki191438,5,"Fuseki1470",826,21.000000},
  {fuseki191439,5,"Fuseki1471",429,12.000000},
  {fuseki191440,5,"Fuseki1472",826,7.000000},
  {fuseki191441,5,"Fuseki1473",905,5.000000},
  {fuseki191442,5,"Fuseki1474",941,5.000000},
  {fuseki191443,5,"Fuseki1475",462,4.000000},
  {fuseki191444,5,"Fuseki1476",457,3.000000},
  {fuseki191445,5,"Fuseki1477",947,3.000000},
  {fuseki191446,5,"Fuseki1478",904,3.000000},
  {fuseki191447,5,"Fuseki1479",466,20.000000},
  {fuseki191448,5,"Fuseki1480",617,13.000000},
  {fuseki191449,5,"Fuseki1481",429,12.000000},
  {fuseki191450,5,"Fuseki1482",653,5.000000},
  {fuseki191451,5,"Fuseki1483",678,4.000000},
  {fuseki191452,5,"Fuseki1484",541,2.000000},
  {fuseki191453,5,"Fuseki1485",462,2.000000},
  {fuseki191454,5,"Fuseki1486",542,2.000000},
  {fuseki191455,6,"Fuseki1487",948,26.000000},
  {fuseki191456,6,"Fuseki1488",839,17.000000},
  {fuseki191457,6,"Fuseki1490",949,4.000000},
  {fuseki191458,6,"Fuseki1491",840,3.000000},
  {fuseki191459,6,"Fuseki1492",940,3.000000},
  {fuseki191460,5,"Fuseki1493",837,18.000000},
  {fuseki191461,5,"Fuseki1494",418,10.000000},
  {fuseki191462,5,"Fuseki1495",948,10.000000},
  {fuseki191463,5,"Fuseki1496",909,9.000000},
  {fuseki191464,5,"Fuseki1497",838,7.000000},
  {fuseki191465,5,"Fuseki1498",872,4.000000},
  {fuseki191466,4,"Fuseki1499",913,18.000000},
  {fuseki191467,4,"Fuseki1500",939,10.000000},
  {NULL,0,NULL,0,0.0}
};
