#ifndef IO_MTX_FILE_FORMAT_H
#define IO_MTX_FILE_FORMAT_H

#include <istream>
#include <ostream>
#include <string>

namespace taco {
class TensorBase;
class Format;
namespace io {
namespace mtx {

/// Read an mtx matrix from a file.
TensorBase read(std::string filename, const Format& format, bool pack = true);

/// Read an mtx matrix from a stream.
TensorBase read(std::istream& stream, const Format& format, bool pack = true);

/// Write an mtx matrix to a file.
void write(std::string filename, const TensorBase& tensor);

/// Write an mtx matrix to a stream.
void write(std::ostream& stream, const TensorBase& tensor);

}}}

#endif
