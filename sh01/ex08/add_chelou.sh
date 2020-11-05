#FT_NBR1="\\'?\"\\\"'\\"
#FT_NBR2=rcrdmddd
#FT_NBR1="\\\"\\\"!\\\"\\\"!\\\"\\\"!\\\"\\\"!\\\"\\\"!\\\"\\\""
#FT_NBR2=dcrcmcmooododmrrrmorcmcrmomo

base5_in1=$(echo $FT_NBR1 | tr "'\"?!" '0234' | tr '\' '1')
base5_in2=$(echo $FT_NBR2 | tr 'mrdoc' '01234')
base5_to_13=$(echo 'obase=13; ibase=5;' $base5_in1 + $base5_in2 | bc)
echo $base5_to_13 | tr "0123456789ABC" "gtaio luSnemf"
