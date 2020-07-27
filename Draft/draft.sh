#!/bin/bash
Path=$(dirname $(readlink -f "$0"))
xournalpp $Path/draft.xopp
