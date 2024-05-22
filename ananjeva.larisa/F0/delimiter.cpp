#include "delimiter.hpp"

std::istream& ananjeva::operator>>(std::istream& in, DelimiterIO&& dest) {
  std::istream::sentry sentry(in);
  if (!sentry) {
    return in;
  }
  char c = '0';
  in >> c;
  if (in && (c != dest.expected)) {
    in.setstate(std::ios::failbit);
  }
  return in;
}

std::istream& ananjeva::operator>>(std::istream& in, LabelIO&& dest) {
  std::istream::sentry sentry(in);
  if (!sentry) {
    return in;
  }
  std::string str = "";
  in >> str;
  if (in && (str != dest.expected)) {
    in.setstate(std::ios::failbit);
  }
  return in;
}
