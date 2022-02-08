
For further distance websites, the access from UCalgary network are faster than from home, but in constract, the closer distance websites are faster for home network. 
UCalgary network often takes more hops to get to the destination. I believe that the UCalgary network has much larger bandwidth than home network, but I think because of more hops, the advantage of bandwidth cancelled out a little bit and the RTT slowed down for UCalgary network. 
The real path is not always the same with the algorithm path, few entries have completely different routing path. This is normal, because due to many reasons, the router might choose another path at the time of request, and the real-word routing network is not as simple as the algorithm routing network, after all. 
Some websites are not located where they are thought to be, for example, University of Alberta and Toronto have their server in Seattle, and as it appears that they are using Amazon CloudFront CDN. 
The video platform iQiYi is originated in Beijing China, and when access this website, the request is routed to a server in Seattle as well; however, it is not the same case when access from within China, it appears that the request is routed to a server in China. Thus, it seems that a policy-based routing is applied for the request based on user's location. 
For CDN, Alibaba is using its own CDN called AlibabaCDN. Both iQiYi and MIT are using Akamai CDN from US, which is relatively popular in the industry. 
The base RTT for both UCalgary and home network is quite stable, the variability is always within 2 miliseconds.
As the distance becomes further, the hops required to reach to the destination become more. For Alibaba website in Hangzhou China, the hops are over 30 times according to the output, and the maximum it reached was at 15 times. 
All the websites are not configured any IPv6 alias, the common ones are IPv4 and Cname.