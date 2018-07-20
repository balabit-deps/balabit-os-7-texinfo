#!/bin/sh
# Copyright (C) 2014, 2015, 2017 Free Software Foundation, Inc.
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3, or (at your option)
# any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

srcdir=${srcdir:-.}
. $srcdir/t/Init-test.inc
. $t/Init-inter.inc

run_ginfo

# Type "M-x index-apropos", look for "link" in indices, select first
# result. Then type "i" followed by <TAB> to check the indices in the
# file are still there.

printf '\033xindex-apropos\rlink\r\t\ri\txxxx\rqq' >$PTY_TYPE
# We exited the "i" prompt with "xxx\r" instead of "\007" because
# C-g leads typeahead to be discarded so it would not be reliable.

timeout_test

cleanup
