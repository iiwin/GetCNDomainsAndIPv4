﻿#pragma once
#include "misc.h"
#include <vector>
class ipv4 {
private:
	std::vector<ll> n_;
public:
	ipv4(const ipv4& a);
	explicit ipv4(const std::string& strip);//用ip字符串初始化，如x.x.x.x
	explicit ipv4(const ll& n1, const ll& n2, const ll& n3, const ll& n4);//用点分十进制初始化
	explicit ipv4(const std::vector<ll>& a);//用大小为4的vector初始化
	void get_ipv4(const std::string& strip);//
	ll get_ipv4(const std::size_t& i);//返回ipv4第i个十进制数，i=0,1,2,3
	std::vector<ll> get_ipv4() const;//返回大小为4的vector，4个用小数点分开的十进制数
	std::string str();//返回ipv4字符串，如x.x.x.x
	ll ip_to_long();
};
struct ip_list
{
	ipv4 first_ip;
	ipv4 last_ip;
	std::string mask;
	ll Hosts;//IP个数
	ll CIDR;
	//ip_list() {}
	ip_list(std::string a, std::string b, std::string c, ll d,ll e) :first_ip(a), last_ip(c), mask(b), Hosts(d),CIDR(e){}

};
bool is_cn_ipv4(const std::string& line);
std::string get_subnet_mask(const ll& num);
std::string get_last_ip(const std::string& ip, ll num);
ip_list get_ip(std::string line);//从delegated-apnic-latest中的CN ipv4一行中返回ip_list