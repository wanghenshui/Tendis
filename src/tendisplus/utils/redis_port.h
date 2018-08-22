#ifndef SRC_TENDISPLUS_UTILS_REDIS_PORT_H_
#define SRC_TENDISPLUS_UTILS_REDIS_PORT_H_

#include <iostream>
#include <string>

namespace tendisplus {

namespace redis_port {

/* Convert a string into a long long. Returns 1 if the string could be parsed
 * into a (non-overflowing) long long, 0 otherwise. The value will be set to
 * the parsed value when appropriate. */
int string2ll(const char *s, size_t slen, long long *value); // (NOLINT/int)

std::string errorReply(const std::string& s);

}  // namespace redis_port
}  // namespace tendisplus

#endif  // SRC_TENDISPLUS_UTILS_REDIS_PORT_H_


