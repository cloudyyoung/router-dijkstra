# www.ualberta.ca (52.84.162.109)

```
[yunfan.yang1@csx ~]$ traceroute 52.84.162.109
traceroute to 52.84.162.109 (52.84.162.109), 30 hops max, 60 byte packets
 1  _gateway (136.159.5.1)  0.717 ms  0.658 ms  0.699 ms
 2  * * *
 3  10.18.44.85 (10.18.44.85)  0.531 ms  0.490 ms  0.561 ms
 4  10.18.44.86 (10.18.44.86)  0.404 ms  0.362 ms  0.305 ms
 5  10.18.44.61 (10.18.44.61)  0.423 ms  0.516 ms  0.474 ms
 6  10.59.226.26 (10.59.226.26)  0.335 ms  0.382 ms  0.340 ms
 7  h76.gpvpn.ucalgary.ca (136.159.199.76)  1.116 ms  1.187 ms  1.036 ms
 8  h97.gpvpn.ucalgary.ca (136.159.199.97)  1.140 ms  1.143 ms  1.662 ms
 9  clgr2rtr2.canarie.ca (199.212.24.66)  1.253 ms  1.578 ms  1.635 ms
10  rgna1rtr2.canarie.ca (205.189.33.180)  73.542 ms  73.501 ms  73.430 ms
11  wngp2rtr2.canarie.ca (205.189.33.177)  73.528 ms  72.906 ms  73.066 ms
12  sttl1rtr2.canarie.ca (206.81.80.189)  72.747 ms  72.739 ms  72.860 ms
13  207.231.242.12 (207.231.242.12)  72.547 ms  72.742 ms  73.310 ms
14  * 52.95.52.224 (52.95.52.224)  74.043 ms 52.95.52.122 (52.95.52.122)  73.954 ms
15  52.95.52.227 (52.95.52.227)  73.405 ms 52.95.52.29 (52.95.52.29)  73.286 ms 52.95.52.231 (52.95.52.231)  73.435 ms
16  205.251.225.231 (205.251.225.231)  73.409 ms 205.251.225.215 (205.251.225.215)  73.429 ms 205.251.225.253 (205.251.225.253)  73.823 ms
17  52.95.54.232 (52.95.54.232)  73.798 ms 52.95.55.144 (52.95.55.144)  73.353 ms 52.95.54.109 (52.95.54.109)  73.329 ms
18  150.222.237.51 (150.222.237.51)  73.062 ms 150.222.237.53 (150.222.237.53)  73.038 ms 150.222.237.61 (150.222.237.61)  73.013 ms
19  * * *
20  * * *
21  * * *
22  * * *
23  * * *
24  server-52-84-162-109.sea19.r.cloudfront.net (52.84.162.109)  75.356 ms  73.666 ms  73.605 ms
```

```
Microsoft Windows [Version 10.0.19043.1348]
(c) Microsoft Corporation. All rights reserved.

C:\Users\cloud>tracert 52.84.162.109

Tracing route to server-52-84-162-109.sea19.r.cloudfront.net [52.84.162.109]
over a maximum of 30 hops:

  1     7 ms     2 ms     2 ms  hitronhub.home [192.168.0.1]
  2     *        *        *     Request timed out.
  3    14 ms    12 ms    12 ms  rc3so-be129-1.cg.shawcable.net [64.59.135.9]
  4    53 ms    38 ms    36 ms  rc1wt-be82.wa.shawcable.net [66.163.76.9]
  5    35 ms    52 ms    50 ms  99.82.176.40
  6    51 ms    36 ms    52 ms  52.95.53.199
  7    46 ms    38 ms    40 ms  52.95.52.131
  8    40 ms    40 ms    36 ms  205.251.225.233
  9    41 ms    36 ms    35 ms  52.95.54.232
 10    44 ms    39 ms    37 ms  150.222.237.61
 11     *        *        *     Request timed out.
 12     *        *        *     Request timed out.
 13     *        *        *     Request timed out.
 14     *        *        *     Request timed out.
 15     *        *        *     Request timed out.
 16    35 ms    33 ms    38 ms  server-52-84-162-109.sea19.r.cloudfront.net [52.84.162.109]
```

# www.utoronto.ca (99.86.37.6)

```
[yunfan.yang1@csx ~]$ traceroute 99.86.37.6
traceroute to 99.86.37.6 (99.86.37.6), 30 hops max, 60 byte packets
 1  _gateway (136.159.5.1)  0.332 ms  0.315 ms  0.328 ms
 2  * * *
 3  10.18.44.85 (10.18.44.85)  1.007 ms  0.980 ms  1.026 ms
 4  10.18.44.86 (10.18.44.86)  0.215 ms  0.234 ms  0.203 ms
 5  10.18.44.61 (10.18.44.61)  1.090 ms  1.063 ms  1.037 ms
 6  10.59.226.26 (10.59.226.26)  0.369 ms  0.353 ms  0.474 ms
 7  h76.gpvpn.ucalgary.ca (136.159.199.76)  1.283 ms  1.029 ms  0.918 ms
 8  h97.gpvpn.ucalgary.ca (136.159.199.97)  1.261 ms  1.234 ms  1.245 ms
 9  clgr2rtr2.canarie.ca (199.212.24.66)  1.206 ms  1.176 ms  1.545 ms
10  rgna1rtr2.canarie.ca (205.189.33.180)  73.073 ms  73.423 ms  72.997 ms
11  wngp2rtr2.canarie.ca (205.189.33.177)  75.601 ms  75.010 ms  74.997 ms
12  sttl1rtr2.canarie.ca (206.81.80.189)  72.895 ms  72.786 ms  73.231 ms
13  207.231.242.12 (207.231.242.12)  72.672 ms  72.645 ms  72.619 ms
14  * 52.95.52.88 (52.95.52.88)  74.414 ms 52.95.52.122 (52.95.52.122)  73.354 ms
15  52.95.52.23 (52.95.52.23)  73.323 ms 52.95.52.29 (52.95.52.29)  73.988 ms 52.95.52.25 (52.95.52.25)  73.311 ms
16  205.251.225.253 (205.251.225.253)  73.286 ms 205.251.225.217 (205.251.225.217)  73.889 ms 205.251.225.251 (205.251.225.251)  73.272 ms
17  52.95.54.90 (52.95.54.90)  75.120 ms 52.95.54.22 (52.95.54.22)  74.476 ms 52.95.54.228 (52.95.54.228)  76.937 ms
18  205.251.225.49 (205.251.225.49)  73.134 ms 205.251.225.51 (205.251.225.51)  73.108 ms 205.251.225.21 (205.251.225.21)  76.852 ms
19  * * *
20  * * *
21  * * *
22  * * *
23  * * *
24  server-99-86-37-6.sea19.r.cloudfront.net (99.86.37.6)  73.405 ms  72.756 ms  72.685 ms
```

```
Microsoft Windows [Version 10.0.19043.1348]
(c) Microsoft Corporation. All rights reserved.

C:\Users\cloud>tracert 99.86.37.6

Tracing route to server-99-86-37-6.sea19.r.cloudfront.net [99.86.37.6]
over a maximum of 30 hops:

  1   367 ms     4 ms     3 ms  hitronhub.home [192.168.0.1]
  2     *        *        *     Request timed out.
  3    16 ms    12 ms    22 ms  rc3so-be129-1.cg.shawcable.net [64.59.135.9]
  4    45 ms    37 ms    41 ms  rc1wt-be82.wa.shawcable.net [66.163.76.9]
  5    41 ms    36 ms    50 ms  99.82.176.40
  6    39 ms    41 ms    35 ms  52.95.53.193
  7    35 ms    36 ms    33 ms  52.95.53.129
  8    36 ms    34 ms    57 ms  205.251.225.249
  9    45 ms    41 ms    45 ms  52.95.55.134
 10    45 ms    36 ms    45 ms  205.251.225.35
 11     *        *        *     Request timed out.
 12     *        *        *     Request timed out.
 13     *        *        *     Request timed out.
 14     *        *        *     Request timed out.
 15     *        *        *     Request timed out.
 16    34 ms    38 ms    32 ms  server-99-86-37-6.sea19.r.cloudfront.net [99.86.37.6]

Trace complete.
```

# www.ubc.ca (206.87.224.15)

```
[yunfan.yang1@csx ~]$ traceroute 206.87.224.15
traceroute to 206.87.224.15 (206.87.224.15), 30 hops max, 60 byte packets
 1  _gateway (136.159.5.1)  0.445 ms  0.399 ms  0.479 ms
 2  * * *
 3  10.18.44.85 (10.18.44.85)  0.847 ms  0.820 ms  0.795 ms
 4  10.18.44.86 (10.18.44.86)  0.387 ms  0.356 ms  0.329 ms
 5  10.18.44.61 (10.18.44.61)  0.525 ms  0.622 ms  0.598 ms
 6  10.59.226.26 (10.59.226.26)  0.452 ms  0.425 ms  0.393 ms
 7  h76.gpvpn.ucalgary.ca (136.159.199.76)  1.047 ms  1.082 ms  1.093 ms
 8  h99.gpvpn.ucalgary.ca (136.159.199.99)  9.323 ms  1.239 ms  1.213 ms
 9  clgr2rtr1.network.canarie.ca (205.189.32.212)  4.238 ms  1.334 ms  1.770 ms
10  rgna1rtr1.network.canarie.ca (205.189.32.234)  9.654 ms  9.758 ms  9.643 ms
11  wnpg2rtr1.network.canarie.ca (205.189.32.239)  16.567 ms  16.215 ms  15.677 ms
12  sttl1rtr1.network.canarie.ca (205.189.32.80)  80.022 ms  79.822 ms  79.789 ms
13  srry1rtr1.network.canarie.ca (205.189.32.0)  83.484 ms  83.306 ms  83.066 ms
14  vncv1rtr1.network.canarie.ca (205.189.32.9)  84.048 ms  84.022 ms  83.901 ms
15  205.189.32.173 (205.189.32.173)  83.971 ms  84.458 ms  84.174 ms
16  cr2-100g-bb3900ae2.vncv1.bc.net (206.12.0.121)  84.353 ms  84.320 ms  84.980 ms
17  343-oran-ubcab-cr2.vncv1.bc.net (134.87.2.49)  84.245 ms  84.207 ms  84.872 ms
18  137.82.88.122 (137.82.88.122)  85.067 ms  85.411 ms  85.376 ms
19  a22-a0.net.ubc.ca (137.82.123.113)  84.887 ms  84.908 ms  84.905 ms
20  * * *
21  * * *
22  * * *
23  * * *
24  * * *
25  * * *
26  * * *
27  * * *
28  * * *
29  * * *
30  * * *
```

```
Microsoft Windows [Version 10.0.19043.1348]
(c) Microsoft Corporation. All rights reserved.

C:\Users\cloud>tracert 206.87.224.15

Tracing route to ubc.ca [206.87.224.15]
over a maximum of 30 hops:

  1    83 ms     2 ms     3 ms  hitronhub.home [192.168.0.1]
  2     *        *        *     Request timed out.
  3    27 ms    13 ms    14 ms  rc3so-be129-1.cg.shawcable.net [64.59.135.9]
  4    34 ms    35 ms    33 ms  rc1wt-be82.wa.shawcable.net [66.163.76.9]
  5    37 ms    40 ms    39 ms  rc1bb-be90-1.vc.shawcable.net [66.163.76.65]
  6     *        *        *     Request timed out.
  7    44 ms    43 ms    40 ms  64.251.87.210
  8    48 ms    39 ms    43 ms  134.87.30.149
  9    41 ms    41 ms    38 ms  137.82.88.122
 10    42 ms    38 ms    41 ms  a22-a0.net.ubc.ca [137.82.123.113]
 11     *        *        *     Request timed out.
 12     *        *        *     Request timed out.
 13     *        *        *     Request timed out.
 14     *        *        *     Request timed out.
 15     *        *        *     Request timed out.
 16     *        *        *     Request timed out.
 17     *        *        *     Request timed out.
 18     *        *        *     Request timed out.
 19     *        *        *     Request timed out.
 20     *        *        *     Request timed out.
 21     *        *        *     Request timed out.
 22     *        *        *     Request timed out.
 23     *        *        *     Request timed out.
 24     *        *        *     Request timed out.
 25     *        *        *     Request timed out.
 26     *        *        *     Request timed out.
 27     *        *        *     Request timed out.
 28     *        *        *     Request timed out.
 29     *        *        *     Request timed out.
 30     *        *        *     Request timed out.

Trace complete.
```

# www.mcgill.ca (132.216.177.160)

```
[yunfan.yang1@csx ~]$ traceroute 132.216.177.160
traceroute to 132.216.177.160 (132.216.177.160), 30 hops max, 60 byte packets
 1  _gateway (136.159.5.1)  0.399 ms  0.436 ms  0.512 ms
 2  * * *
 3  * * *
 4  10.18.44.86 (10.18.44.86)  0.320 ms  0.293 ms  0.356 ms
 5  * * *
 6  10.59.226.26 (10.59.226.26)  0.378 ms  0.378 ms  0.332 ms
 7  h76.gpvpn.ucalgary.ca (136.159.199.76)  1.112 ms  1.088 ms  1.060 ms
 8  h99.gpvpn.ucalgary.ca (136.159.199.99)  1.233 ms  1.206 ms  1.102 ms
 9  clgr2rtr1.network.canarie.ca (205.189.32.212)  6.437 ms  1.406 ms  5.541 ms
10  rgna1rtr1.network.canarie.ca (205.189.32.234)  9.527 ms  9.663 ms  9.419 ms
11  wnpg2rtr1.network.canarie.ca (205.189.32.239)  17.000 ms  16.110 ms  15.695 ms
12  wnpg1rtr1.network.canarie.ca (205.189.32.61)  16.089 ms  15.940 ms  16.050 ms
13  otwa4rtr1.network.canarie.ca (205.189.32.180)  44.764 ms  44.736 ms  44.708 ms
14  205.189.32.57 (205.189.32.57)  44.760 ms  44.632 ms  44.603 ms
15  * * *
16  * * *
17  * * *
18  * * *
19  * * *
20  * * *
21  * * *
22  www.mcgill.ca (132.216.177.160)  49.877 ms  49.395 ms  49.204 ms
```

```
Microsoft Windows [Version 10.0.19043.1348]
(c) Microsoft Corporation. All rights reserved.

C:\Users\cloud>tracert 132.216.177.160

Tracing route to www.mcgill.ca [132.216.177.160]
over a maximum of 30 hops:

  1    79 ms     4 ms     4 ms  hitronhub.home [192.168.0.1]
  2     *        *        *     Request timed out.
  3    14 ms    10 ms    13 ms  rc3so-be129-1.cg.shawcable.net [64.59.135.9]
  4    36 ms    33 ms    57 ms  rc1wt-be82.wa.shawcable.net [66.163.76.9]
  5    36 ms    39 ms    36 ms  ae22.cr4-sea2.ip4.gtt.net [209.120.141.209]
  6    99 ms    93 ms    91 ms  ae16.cr0-mtl1.ip4.gtt.net [89.149.186.134]
  7    95 ms   104 ms   109 ms  ip4.gtt.net [208.116.159.206]
  8    94 ms    95 ms    92 ms  imtrl-rq-ic-dmtrl-rq.risq.net [192.77.63.70]
  9    92 ms    90 ms   109 ms  mcgill-gw.risq.net [132.202.62.90]
 10    91 ms   105 ms    90 ms  mcgill-internet-membre1.risq.net [206.167.128.42]
 11     *        *        *     Request timed out.
 12     *        *        *     Request timed out.
 13     *        *        *     Request timed out.
 14    98 ms   105 ms    97 ms  www.mcgill.ca [132.216.177.160]

Trace complete.
```


# www.nyu.edu (216.165.47.12)

```
[yunfan.yang1@csx ~]$ traceroute 216.165.47.12
traceroute to 216.165.47.12 (216.165.47.12), 30 hops max, 60 byte packets
 1  _gateway (136.159.5.1)  0.380 ms  0.472 ms  0.432 ms
 2  * * *
 3  10.18.44.85 (10.18.44.85)  3.767 ms  3.734 ms  3.708 ms
 4  10.18.44.86 (10.18.44.86)  0.355 ms  0.328 ms  0.301 ms
 5  10.18.44.61 (10.18.44.61)  3.676 ms  3.648 ms  3.610 ms
 6  10.59.226.26 (10.59.226.26)  0.345 ms  0.368 ms  0.518 ms
 7  h76.gpvpn.ucalgary.ca (136.159.199.76)  1.145 ms  1.120 ms  1.011 ms
 8  h99.gpvpn.ucalgary.ca (136.159.199.99)  1.258 ms  1.228 ms  1.422 ms
 9  clgr2rtr1.network.canarie.ca (205.189.32.212)  1.160 ms  1.478 ms  1.447 ms
10  rgna1rtr1.network.canarie.ca (205.189.32.234)  10.791 ms  9.565 ms  10.703 ms
11  wnpg2rtr1.network.canarie.ca (205.189.32.239)  16.379 ms  16.355 ms  16.330 ms
12  toro3rtr1.network.canarie.ca (205.189.32.210)  37.324 ms  37.278 ms  37.252 ms
13  toro1rtr1.network.canarie.ca (205.189.32.119)  37.931 ms  37.899 ms  37.688 ms
14  nyc-9208-canet-tor.nysernet.net (199.109.4.137)  47.436 ms  47.386 ms  47.396 ms
15  nyu-nyc-9208.nysernet.net (199.109.5.6)  47.363 ms  47.369 ms  47.318 ms
16  * * *
17  * * *
18  nyufw-outside-ngfw-vl3080.net.nyu.edu (128.122.254.116)  48.238 ms  48.736 ms  48.699 ms
19  * * *
20  wsqdcgwa-vl901.net.nyu.edu (128.122.1.6)  48.697 ms  48.774 ms  48.585 ms
21  * * *
22  * * *
23  * * *
24  * * *
25  * * *
26  * * *
27  * * *
28  * * *
29  * * *
30  * * *
```

```
Microsoft Windows [Version 10.0.19043.1348]
(c) Microsoft Corporation. All rights reserved.

C:\Users\cloud>tracert 216.165.47.12

Tracing route to web.gslb.nyu.edu [216.165.47.12]
over a maximum of 30 hops:

  1    83 ms     3 ms     3 ms  hitronhub.home [192.168.0.1]
  2     *        *        *     Request timed out.
  3    16 ms    22 ms    11 ms  rc3so-be129-1.cg.shawcable.net [64.59.135.9]
  4    48 ms    45 ms    51 ms  rc1wt-be82.wa.shawcable.net [66.163.76.9]
  5     *        *        *     Request timed out.
  6    78 ms    76 ms    76 ms  ae12.cs2.sea1.us.eth.zayo.com [64.125.23.46]
  7     *        *        *     Request timed out.
  8    81 ms    77 ms    98 ms  ae3.cs2.lga5.us.eth.zayo.com [64.125.29.212]
  9     *        *        *     Request timed out.
 10    80 ms    79 ms    80 ms  209.66.118.177.IDIA-282827-ZYO.zip.zayo.com [209.66.118.177]
 11     *        *        *     Request timed out.
 12     *        *        *     Request timed out.
 13    80 ms    78 ms    93 ms  nyufw-outside-ngfw-vl3080.net.nyu.edu [128.122.254.116]
 14     *        *        *     Request timed out.
 15    81 ms    90 ms    78 ms  wsqdcgwa-vl901.net.nyu.edu [128.122.1.6]
 16     *        *        *     Request timed out.
 17     *        *        *     Request timed out.
 18     *        *        *     Request timed out.
 19     *        *        *     Request timed out.
 20     *        *        *     Request timed out.
 21     *        *        *     Request timed out.
 22     *        *        *     Request timed out.
 23     *        *        *     Request timed out.
 24     *        *        *     Request timed out.
 25     *        *        *     Request timed out.
 26     *        *        *     Request timed out.
 27     *        *        *     Request timed out.
 28     *        *        *     Request timed out.
 29     *        *        *     Request timed out.
 30     *        *        *     Request timed out.

Trace complete.
```

# www.mit.edu (104.78.249.251)

```
[yunfan.yang1@csx ~]$ traceroute 104.78.249.251
traceroute to 104.78.249.251 (104.78.249.251), 30 hops max, 60 byte packets
 1  _gateway (136.159.5.1)  0.445 ms  0.396 ms  0.391 ms
 2  * * *
 3  10.18.44.85 (10.18.44.85)  0.414 ms  0.409 ms  0.446 ms
 4  10.18.44.86 (10.18.44.86)  0.273 ms  0.240 ms  0.243 ms
 5  10.18.44.61 (10.18.44.61)  0.442 ms  0.489 ms  0.433 ms
 6  10.59.226.26 (10.59.226.26)  0.340 ms  0.330 ms  0.450 ms
 7  h76.gpvpn.ucalgary.ca (136.159.199.76)  1.072 ms  1.068 ms  1.347 ms
 8  h66-244-233-17.bigpipeinc.com (66.244.233.17)  1.059 ms  1.144 ms  0.925 ms
 9  * * *
10  rc3so-be31-1.cg.shawcable.net (24.244.0.17)  3.981 ms  1.992 ms  3.895 ms
11  rc4ec-be13.il.shawcable.net (66.163.65.18)  31.537 ms  31.384 ms  31.113 ms
12  66.163.68.106 (66.163.68.106)  31.027 ms  30.994 ms  30.940 ms
13  ae34.r02.border101.ord02.fab.netarch.akamai.com (23.203.151.227)  31.243 ms  31.646 ms  31.352 ms
14  * * *
15  * * *
16  * * *
17  * * *
18  * * *
19  * * *
20  * * *
21  * * *
22  * * *
23  * * *
24  * * *
25  * * *
26  * * *
27  * * *
28  * * *
29  * * *
30  * * *
```

```
Microsoft Windows [Version 10.0.19043.1348]
(c) Microsoft Corporation. All rights reserved.

C:\Users\cloud>tracert 104.78.249.251

Tracing route to a104-78-249-251.deploy.static.akamaitechnologies.com [104.78.249.251]
over a maximum of 30 hops:

  1    83 ms     3 ms     2 ms  hitronhub.home [192.168.0.1]
  2     *        *        *     Request timed out.
  3    10 ms    14 ms    14 ms  rc3so-be129-1.cg.shawcable.net [64.59.135.9]
  4    41 ms    41 ms    46 ms  rc4ec-be13.il.shawcable.net [66.163.65.18]
  5    44 ms    44 ms    39 ms  66.163.68.106
  6    43 ms    44 ms    45 ms  ae34.r02.border101.ord02.fab.netarch.akamai.com [23.203.151.227]
  7     *        *        *     Request timed out.
  8     *        *        *     Request timed out.
  9     *        *        *     Request timed out.
 10    46 ms    42 ms    41 ms  a104-78-249-251.deploy.static.akamaitechnologies.com [104.78.249.251]

Trace complete.
```

# cn.aliyun.com (106.11.253.83)

```
[yunfan.yang1@csx ~]$ traceroute 106.11.253.83
traceroute to 106.11.253.83 (106.11.253.83), 30 hops max, 60 byte packets
 1  _gateway (136.159.5.1)  0.409 ms  0.491 ms  0.456 ms
 2  * * *
 3  10.18.44.85 (10.18.44.85)  0.501 ms  0.468 ms  0.438 ms
 4  10.18.44.86 (10.18.44.86)  0.370 ms  0.337 ms  0.295 ms
 5  10.18.44.61 (10.18.44.61)  0.528 ms  0.499 ms  0.924 ms
 6  * * *
 7  * * *
 8  * * *
 9  * * *
10  * * *
11  * * *
12  * * *
13  * * *
14  * * *
15  * * *
16  * * *
17  * * *
18  * * *
19  * * *
20  * * *
21  * * *
22  * * *
23  * * *
24  * * *
25  * * *
26  * * *
27  * * *
28  * * *
29  * * *
30  * * *
```


```
Microsoft Windows [Version 10.0.19043.1348]
(c) Microsoft Corporation. All rights reserved.

C:\Users\cloud>tracert 106.11.253.83

Tracing route to 106.11.253.83 over a maximum of 30 hops

  1    84 ms     2 ms     2 ms  hitronhub.home [192.168.0.1]
  2     *        *        *     Request timed out.
  3    15 ms    19 ms    16 ms  rc3so-be129-1.cg.shawcable.net [64.59.135.9]
  4    34 ms    33 ms    35 ms  rc1wt-be82.wa.shawcable.net [66.163.76.9]
  5    37 ms    36 ms    38 ms  rc2wt-be18-1.wa.shawcable.net [66.163.64.82]
  6    59 ms    53 ms    54 ms  rc4sj-be60.cl.shawcable.net [66.163.78.74]
  7    52 ms    52 ms    63 ms  218.30.54.160
  8   189 ms   186 ms     *     202.97.89.134
  9     *        *        *     Request timed out.
 10   188 ms   188 ms   191 ms  202.97.50.221
 11   200 ms   202 ms     *     101.95.218.54
 12     *        *        *     Request timed out.
 13   203 ms   200 ms   198 ms  114.80.58.82
 14   215 ms   201 ms   204 ms  140.205.50.238
 15   204 ms   199 ms   205 ms  119.38.213.105
 16     *        *        *     Request timed out.
 17     *        *        *     Request timed out.
 18     *        *        *     Request timed out.
 19     *        *        *     Request timed out.
 20     *        *        *     Request timed out.
 21     *        *        *     Request timed out.
 22     *        *        *     Request timed out.
 23     *        *        *     Request timed out.
 24     *        *        *     Request timed out.
 25     *        *        *     Request timed out.
 26     *        *        *     Request timed out.
 27     *        *        *     Request timed out.
 28     *        *        *     Request timed out.
 29     *        *        *     Request timed out.
 30     *        *        *     Request timed out.

Trace complete.
```

# www.iq.com (23.36.241.202)

```
[yunfan.yang1@csx ~]$ traceroute 23.36.241.202
traceroute to 23.36.241.202 (23.36.241.202), 30 hops max, 60 byte packets
 1  _gateway (136.159.5.1)  0.362 ms  0.310 ms  0.315 ms
 2  * * *
 3  10.18.44.85 (10.18.44.85)  0.465 ms  0.439 ms  0.553 ms
 4  10.18.44.86 (10.18.44.86)  0.296 ms  0.269 ms  0.243 ms
 5  10.18.44.61 (10.18.44.61)  0.570 ms  0.544 ms  0.516 ms
 6  10.59.226.26 (10.59.226.26)  0.366 ms  0.363 ms  0.327 ms
 7  h76.gpvpn.ucalgary.ca (136.159.199.76)  1.138 ms  0.895 ms  1.323 ms
 8  h66-244-233-17.bigpipeinc.com (66.244.233.17)  1.396 ms  1.109 ms  1.497 ms
 9  * * *
10  rc3so-be31-1.cg.shawcable.net (24.244.0.17)  2.090 ms  2.057 ms  2.509 ms
11  rc1wt-be82.wa.shawcable.net (66.163.76.9)  24.282 ms  23.859 ms  24.316 ms
12  rc2wt-be18-1.wa.shawcable.net (66.163.64.82)  28.370 ms  24.163 ms  24.391 ms
13  rx0wt-korea-telecom.wa.shawcable.net (66.163.68.14)  24.204 ms  24.039 ms  24.005 ms
14  ae2.sabey-sea3.netarch.akamai.com (23.203.145.213)  31.424 ms  30.400 ms  30.366 ms
15  a23-36-241-202.deploy.static.akamaitechnologies.com (23.36.241.202)  24.131 ms  24.203 ms  24.210 ms
```


```
Microsoft Windows [Version 10.0.19043.1348]
(c) Microsoft Corporation. All rights reserved.

C:\Users\cloud>tracert 23.36.241.202

Tracing route to a23-36-241-202.deploy.static.akamaitechnologies.com [23.36.241.202]
over a maximum of 30 hops:

  1    80 ms     3 ms     2 ms  hitronhub.home [192.168.0.1]
  2     *        *        *     Request timed out.
  3    25 ms    19 ms    17 ms  rc3so-be129-1.cg.shawcable.net [64.59.135.9]
  4    34 ms    34 ms    38 ms  rc1wt-be82.wa.shawcable.net [66.163.76.9]
  5    42 ms    39 ms    57 ms  rc2wt-be18-1.wa.shawcable.net [66.163.64.82]
  6    33 ms    33 ms    38 ms  rx0wt-korea-telecom.wa.shawcable.net [66.163.68.14]
  7    73 ms   188 ms    39 ms  ae2.sabey-sea3.netarch.akamai.com [23.203.145.213]
  8    36 ms    34 ms    36 ms  a23-36-241-202.deploy.static.akamaitechnologies.com [23.36.241.202]

Trace complete.
```