int ping6_main(int argc, char *argv[], int icmp_sock6, int socket_errno);
void ping6_usage(unsigned from_ping);

int ping6_send_probe(int sock, void *packet, unsigned packet_size);
int ping6_receive_error_msg(int sock);
int ping6_parse_reply(struct msghdr *msg, int len, void *addr, struct timeval *);
void ping6_install_filter(int sock);

extern ping_func_set_st ping6_func_set;
