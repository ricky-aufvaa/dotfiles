#!/bin/bash

WP_DIR=/home/ricky/pix/wall
DESK=desktop

BG_LIST=($WP_DIR/*)
N=${#BG_LIST[@]}
((N=RANDOM%N))
RAND_BG=$(basename ${BG_LIST[$N]})

echo $RAND_BG > cur_bg.txt
#xwallpaper --zoom WP_DIR type -f
feh --bg-scale $WP_DIR/$RAND_BG
