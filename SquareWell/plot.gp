set term postscript enhanced color 'Helvetica-Bold,16'
set output 'step.ps'
set xr [-1.0:1.0]
set yr [-1.25:0.25]
set style line 1 lt 1 lw 3 lc rgb 'blue'
set style arrow 1 lt 0 lw 1 lc rgb 'black' nohead
set arrow from -1.0,0.0 to 1.0,0.0 as 1
set xl 'x ----->'
set yl 'Finite width Potential'

plot 'out.dat' u 1:2 w l noti ls 1
set output
! ps2pdf step.ps
! rm step.ps
