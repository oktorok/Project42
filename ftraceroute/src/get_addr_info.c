
#include "traceroute.h"

char	*get_address_info(char *url)
{
	struct sockaddr_in		*ip_addr;
	struct addrinfo			hints;
	struct addrinfo			*result;
	int						i;
	char					hostname[100];

	ft_memset(hostname, 0, 100);
	ft_memset(&hints, 0, sizeof(hints));
	hints.ai_family = AF_UNSPEC;
	if ((i = getaddrinfo(url, NULL, &hints, &result)) < 0)
	{
		printf("ft_ping: host unknown\n");
		exit(1);
	}
	ip_addr = (struct sockaddr_in *)result->ai_addr;
	inet_ntop(AF_INET, &ip_addr->sin_addr, hostname, 100);
	return (ft_strdup(hostname));
}
