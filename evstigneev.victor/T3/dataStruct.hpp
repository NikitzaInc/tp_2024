#ifndef DATA_STRUCT_HPP
#define DATA_STRUCT_HPP
#include <iostream>
#include <vector>

namespace evstigneev
{
  struct Point
  {
    int x, y;
  };

  struct Polygon
  {
    std::vector<Point> points;
    bool operator<(const Polygon& p);
    double getArea() const;
  };

  std::istream& operator>>(std::istream& in, evstigneev::Point& dest);
  std::istream& operator>>(std::istream& in, evstigneev::Polygon& poly);
  bool operator==(const Polygon& fp, const Polygon& sp);
  
}
#endif
