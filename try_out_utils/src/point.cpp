// Copyright 2022 Advanced remanufacturing and technology centre (ARA).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <try_out_utils/point.hpp>

Point::Point(double x, double y)
{
  this->x_ = x;
  this->y_ = y;
}

double Point::get_x()
{
  return this->x_;
}

double Point::get_y()
{
  return this->y_;
}
