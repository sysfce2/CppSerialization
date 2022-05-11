//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: FBE
// FBE version: 1.9.0.0
//------------------------------------------------------------------------------

#pragma once

#if defined(__clang__)
#pragma clang system_header
#elif defined(__GNUC__)
#pragma GCC system_header
#elif defined(_MSC_VER)
#pragma system_header
#endif

#include "fbe.h"

namespace FBE {

// Fast Binary Encoding base field model
template <typename T, typename TBase = T>
class FieldModelBase
{
public:
    FieldModelBase(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset) {}

    // Get the field offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Get the field size
    size_t fbe_size() const noexcept { return sizeof(TBase); }
    // Get the field extra size
    size_t fbe_extra() const noexcept { return 0; }

    // Shift the current field offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current field offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Check if the value is valid
    bool verify() const noexcept { return true; }

    // Get the field value
    void get(T& value, T defaults = (T)0) const noexcept;
    // Set the field value
    void set(T value) noexcept;

private:
    FBEBuffer& _buffer;
    size_t _offset;
};

// Fast Binary Encoding field model
template <typename T>
class FieldModel : public FieldModelBase<T>
{
public:
    using FieldModelBase<T>::FieldModelBase;
};

// Fast Binary Encoding field model bool specialization
template <>
class FieldModel<bool> : public FieldModelBase<bool, uint8_t>
{
public:
    using FieldModelBase<bool, uint8_t>::FieldModelBase;
};

// Fast Binary Encoding field model char specialization
template <>
class FieldModel<char> : public FieldModelBase<char, uint8_t>
{
public:
    using FieldModelBase<char, uint8_t>::FieldModelBase;
};

// Fast Binary Encoding field model wchar specialization
template <>
class FieldModel<wchar_t> : public FieldModelBase<wchar_t, uint32_t>
{
public:
    using FieldModelBase<wchar_t, uint32_t>::FieldModelBase;
};

// Fast Binary Encoding field model decimal specialization
template <>
class FieldModel<decimal_t>
{
public:
    FieldModel(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset) {}

    // Get the field offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Get the field size
    size_t fbe_size() const noexcept { return 16; }
    // Get the field extra size
    size_t fbe_extra() const noexcept { return 0; }

    // Shift the current field offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current field offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Check if the decimal value is valid
    bool verify() const noexcept { return true; }

    // Get the decimal value
    void get(decimal_t& value, decimal_t defaults = decimal_t()) const noexcept;
    // Set the decimal value
    void set(decimal_t value) noexcept;

private:
    FBEBuffer& _buffer;
    size_t _offset;

    static uint64_t extract(double a) noexcept;
    static uint64_t uint32x32(uint32_t a, uint32_t b) noexcept;
    static void uint64x64(uint64_t a, uint64_t b, uint64_t& low64, uint32_t& high32) noexcept;
};

// Fast Binary Encoding field model UUID specialization
template <>
class FieldModel<uuid_t>
{
public:
    FieldModel(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset) {}

    // Get the field offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Get the field size
    size_t fbe_size() const noexcept { return 16; }
    // Get the field extra size
    size_t fbe_extra() const noexcept { return 0; }

    // Shift the current field offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current field offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Check if the UUID value is valid
    bool verify() const noexcept { return true; }

    // Get the UUID value
    void get(uuid_t& value, uuid_t defaults = uuid_t::nil()) const noexcept;
    // Set the UUID value
    void set(uuid_t value) noexcept;

private:
    FBEBuffer& _buffer;
    size_t _offset;
};

// Fast Binary Encoding field model bytes specialization
template <>
class FieldModel<buffer_t>
{
public:
    FieldModel(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset) {}

    // Get the field offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Get the field size
    size_t fbe_size() const noexcept { return 4; }
    // Get the field extra size
    size_t fbe_extra() const noexcept;

    // Shift the current field offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current field offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Check if the bytes value is valid
    bool verify() const noexcept;

    // Get the bytes value
    size_t get(void* data, size_t size) const noexcept;
    // Get the bytes value
    template <size_t N>
    size_t get(uint8_t (&data)[N]) const noexcept { return get(data, N); }
    // Get the bytes value
    template <size_t N>
    size_t get(std::array<uint8_t, N>& data) const noexcept { return get(data.data(), data.size()); }
    // Get the bytes value
    void get(std::vector<uint8_t>& value) const noexcept;
    // Get the bytes value
    void get(buffer_t& value) const noexcept { get(value.buffer()); }

    // Set the bytes value
    void set(const void* data, size_t size);
    // Set the bytes value
    template <size_t N>
    void set(const uint8_t (&data)[N]) { set(data, N); }
    // Set the bytes value
    template <size_t N>
    void set(const std::array<uint8_t, N>& data) { set(data.data(), data.size()); }
    // Set the bytes value
    void set(const std::vector<uint8_t>& value) { set(value.data(), value.size()); }
    // Set the bytes value
    void set(const buffer_t& value) { set(value.buffer()); }

private:
    FBEBuffer& _buffer;
    size_t _offset;
};

// Fast Binary Encoding field model string specialization
template <>
class FieldModel<std::string>
{
public:
    FieldModel(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset) {}

    // Get the field offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Get the field size
    size_t fbe_size() const noexcept { return 4; }
    // Get the field extra size
    size_t fbe_extra() const noexcept;

    // Shift the current field offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current field offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Check if the string value is valid
    bool verify() const noexcept;

    // Get the string value
    size_t get(char* data, size_t size) const noexcept;
    // Get the string value
    template <size_t N>
    size_t get(char (&data)[N]) const noexcept { return get(data, N); }
    // Get the string value
    template <size_t N>
    size_t get(std::array<char, N>& data) const noexcept { return get(data.data(), data.size()); }
    // Get the string value
    void get(std::string& value) const noexcept;
    // Get the string value
    void get(std::string& value, const std::string& defaults) const noexcept;

    // Set the string value
    void set(const char* data, size_t size);
    // Set the string value
    template <size_t N>
    void set(const char (&data)[N]) { set(data, N); }
    // Set the string value
    template <size_t N>
    void set(const std::array<char, N>& data) { set(data.data(), data.size()); }
    // Set the string value
    void set(const std::string& value);

private:
    FBEBuffer& _buffer;
    size_t _offset;
};

// Fast Binary Encoding field model optional specialization
template <typename T>
class FieldModel<std::optional<T>>
{
public:
    FieldModel(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset), value(buffer, 0) {}

    // Get the field offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Get the field size
    size_t fbe_size() const noexcept { return 1 + 4; }
    // Get the field extra size
    size_t fbe_extra() const noexcept;

    // Shift the current field offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current field offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    //! Is the value present?
    explicit operator bool() const noexcept { return has_value(); }

    // Checks if the object contains a value
    bool has_value() const noexcept;

    // Check if the optional value is valid
    bool verify() const noexcept;

    // Get the optional value (being phase)
    size_t get_begin() const noexcept;
    // Get the optional value (end phase)
    void get_end(size_t fbe_begin) const noexcept;

    // Get the optional value
    void get(std::optional<T>& opt, const std::optional<T>& defaults = std::nullopt) const noexcept;

    // Set the optional value (begin phase)
    size_t set_begin(bool has_value);
    // Set the optional value (end phase)
    void set_end(size_t fbe_begin);

    // Set the optional value
    void set(const std::optional<T>& opt);

private:
    FBEBuffer& _buffer;
    size_t _offset;

public:
    // Base field model value
    FieldModel<T> value;
};

// Fast Binary Encoding field model array
template <typename T, size_t N>
class FieldModelArray
{
public:
    FieldModelArray(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset), _model(buffer, offset) {}

    // Get the field offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Get the field size
    size_t fbe_size() const noexcept { return N * _model.fbe_size(); }
    // Get the field extra size
    size_t fbe_extra() const noexcept { return 0; }

    // Shift the current field offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current field offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Get the array
    const uint8_t* data() const noexcept;
    // Get the array
    uint8_t* data() noexcept;
    // Get the array offset
    size_t offset() const noexcept { return 0; }
    // Get the array size
    size_t size() const noexcept { return N; }

    // Array index operator
    FieldModel<T> operator[](size_t index) const noexcept;

    // Check if the array is valid
    bool verify() const noexcept;

    // Get the array as C-array
    template <size_t S>
    void get(T (&values)[S]) const noexcept;
    // Get the array as std::array
    template <size_t S>
    void get(std::array<T, S>& values) const noexcept;
    // Get the array as std::vector
    void get(std::vector<T>& values) const noexcept;

    // Set the array as C-array
    template <size_t S>
    void set(const T (&values)[S]) noexcept;
    // Set the array as std::array
    template <size_t S>
    void set(const std::array<T, S>& values) noexcept;
    // Set the array as std::vector
    void set(const std::vector<T>& values) noexcept;

private:
    FBEBuffer& _buffer;
    size_t _offset;
    FieldModel<T> _model;
};

// Fast Binary Encoding field model vector
template <typename T>
class FieldModelVector
{
public:
    FieldModelVector(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset) {}

    // Get the field offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Get the field size
    size_t fbe_size() const noexcept { return 4; }
    // Get the field extra size
    size_t fbe_extra() const noexcept;

    // Shift the current field offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current field offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Get the vector offset
    size_t offset() const noexcept;
    // Get the vector size
    size_t size() const noexcept;

    // Vector index operator
    FieldModel<T> operator[](size_t index) const noexcept;

    // Resize the vector and get its first model
    FieldModel<T> resize(size_t size);

    // Check if the vector is valid
    bool verify() const noexcept;

    // Get the vector as std::vector
    void get(std::vector<T>& values) const noexcept;
    // Get the vector as std::list
    void get(std::list<T>& values) const noexcept;
    // Get the vector as std::set
    void get(std::set<T>& values) const noexcept;

    // Set the vector as std::vector
    void set(const std::vector<T>& values) noexcept;
    // Set the vector as std::list
    void set(const std::list<T>& values) noexcept;
    // Set the vector as std::set
    void set(const std::set<T>& values) noexcept;

private:
    FBEBuffer& _buffer;
    size_t _offset;
};

// Fast Binary Encoding field model map
template <typename TKey, typename TValue>
class FieldModelMap
{
public:
    FieldModelMap(FBEBuffer& buffer, size_t offset) noexcept : _buffer(buffer), _offset(offset) {}

    // Get the field offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Get the field size
    size_t fbe_size() const noexcept { return 4; }
    // Get the field extra size
    size_t fbe_extra() const noexcept;

    // Shift the current field offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current field offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Get the map offset
    size_t offset() const noexcept;
    // Get the map size
    size_t size() const noexcept;

    // Map index operator
    std::pair<FieldModel<TKey>, FieldModel<TValue>> operator[](size_t index) const noexcept;

    // Resize the map and get its first model
    std::pair<FieldModel<TKey>, FieldModel<TValue>> resize(size_t size);

    // Check if the map is valid
    bool verify() const noexcept;

    // Get the map as std::map
    void get(std::map<TKey, TValue>& values) const noexcept;
    // Get the map as std::unordered_map
    void get(std::unordered_map<TKey, TValue>& values) const noexcept;

    // Set the map as std::map
    void set(const std::map<TKey, TValue>& values) noexcept;
    // Set the map as std::unordered_map
    void set(const std::unordered_map<TKey, TValue>& values) noexcept;

private:
    FBEBuffer& _buffer;
    size_t _offset;
};

} // namespace FBE

#include "fbe_models.inl"
