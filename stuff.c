#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/socket.h>

struct addrinfo {
	int	ai_flags;
	int	ai_family;
	int	ai_socktype;
	int	ai_protocol;
	size_t	ai_addrlen;
	struct sockaddr	*ai_addr;
	char	*ai_canonname;

	struct addrinfo *ai_next;
};

struct sockaddr {
	unsigned short	sa_family;
	char	sa_data[14];
};

struct sockaddr_in {
	short int	sin_family;
	unsigned short int	sin_port;
	struct in_addr	sin_addr;
	unsigned char	sin_zero[8];
};

struct in_addr {
	uint32_t s_addr;
};

struct sockaddr_in6 {
	uint16_t	sin6_family;
	uint16_t	sin6_port;
	uint32_t	sin6_flowinfo;
	struct in6_addr	sin6_addr;
	uint32_t	sin6_scope_id;
};

struct in6_addr {
	uint32_t s_addr[16];
};

struct sockaddr_storage {
	sa_family_t ss_family;

	char	__ss_pad1[_SS_PAD1SIZE];
	int64_t __ss_align;
	char	__ss_pad2[_SS_PAD2SIZE];
};
