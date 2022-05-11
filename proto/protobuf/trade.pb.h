// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: trade.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_trade_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_trade_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3020000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3020000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_trade_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_trade_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_trade_2eproto;
namespace Trade {
namespace protobuf {
class Account;
struct AccountDefaultTypeInternal;
extern AccountDefaultTypeInternal _Account_default_instance_;
class Balance;
struct BalanceDefaultTypeInternal;
extern BalanceDefaultTypeInternal _Balance_default_instance_;
class Order;
struct OrderDefaultTypeInternal;
extern OrderDefaultTypeInternal _Order_default_instance_;
}  // namespace protobuf
}  // namespace Trade
PROTOBUF_NAMESPACE_OPEN
template<> ::Trade::protobuf::Account* Arena::CreateMaybeMessage<::Trade::protobuf::Account>(Arena*);
template<> ::Trade::protobuf::Balance* Arena::CreateMaybeMessage<::Trade::protobuf::Balance>(Arena*);
template<> ::Trade::protobuf::Order* Arena::CreateMaybeMessage<::Trade::protobuf::Order>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace Trade {
namespace protobuf {

enum OrderSide : int {
  buy = 0,
  sell = 1,
  OrderSide_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  OrderSide_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool OrderSide_IsValid(int value);
constexpr OrderSide OrderSide_MIN = buy;
constexpr OrderSide OrderSide_MAX = sell;
constexpr int OrderSide_ARRAYSIZE = OrderSide_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* OrderSide_descriptor();
template<typename T>
inline const std::string& OrderSide_Name(T enum_t_value) {
  static_assert(::std::is_same<T, OrderSide>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function OrderSide_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    OrderSide_descriptor(), enum_t_value);
}
inline bool OrderSide_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, OrderSide* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<OrderSide>(
    OrderSide_descriptor(), name, value);
}
enum OrderType : int {
  market = 0,
  limit = 1,
  stop = 2,
  OrderType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  OrderType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool OrderType_IsValid(int value);
constexpr OrderType OrderType_MIN = market;
constexpr OrderType OrderType_MAX = stop;
constexpr int OrderType_ARRAYSIZE = OrderType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* OrderType_descriptor();
template<typename T>
inline const std::string& OrderType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, OrderType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function OrderType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    OrderType_descriptor(), enum_t_value);
}
inline bool OrderType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, OrderType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<OrderType>(
    OrderType_descriptor(), name, value);
}
// ===================================================================

class Order final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Trade.protobuf.Order) */ {
 public:
  inline Order() : Order(nullptr) {}
  ~Order() override;
  explicit PROTOBUF_CONSTEXPR Order(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Order(const Order& from);
  Order(Order&& from) noexcept
    : Order() {
    *this = ::std::move(from);
  }

  inline Order& operator=(const Order& from) {
    CopyFrom(from);
    return *this;
  }
  inline Order& operator=(Order&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Order& default_instance() {
    return *internal_default_instance();
  }
  static inline const Order* internal_default_instance() {
    return reinterpret_cast<const Order*>(
               &_Order_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Order& a, Order& b) {
    a.Swap(&b);
  }
  inline void Swap(Order* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Order* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Order* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Order>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Order& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Order& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Order* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Trade.protobuf.Order";
  }
  protected:
  explicit Order(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSymbolFieldNumber = 2,
    kIdFieldNumber = 1,
    kSideFieldNumber = 3,
    kPriceFieldNumber = 5,
    kVolumeFieldNumber = 6,
    kTypeFieldNumber = 4,
  };
  // string symbol = 2;
  void clear_symbol();
  const std::string& symbol() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_symbol(ArgT0&& arg0, ArgT... args);
  std::string* mutable_symbol();
  PROTOBUF_NODISCARD std::string* release_symbol();
  void set_allocated_symbol(std::string* symbol);
  private:
  const std::string& _internal_symbol() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_symbol(const std::string& value);
  std::string* _internal_mutable_symbol();
  public:

  // int32 id = 1;
  void clear_id();
  int32_t id() const;
  void set_id(int32_t value);
  private:
  int32_t _internal_id() const;
  void _internal_set_id(int32_t value);
  public:

  // .Trade.protobuf.OrderSide side = 3;
  void clear_side();
  ::Trade::protobuf::OrderSide side() const;
  void set_side(::Trade::protobuf::OrderSide value);
  private:
  ::Trade::protobuf::OrderSide _internal_side() const;
  void _internal_set_side(::Trade::protobuf::OrderSide value);
  public:

  // double price = 5;
  void clear_price();
  double price() const;
  void set_price(double value);
  private:
  double _internal_price() const;
  void _internal_set_price(double value);
  public:

  // double volume = 6;
  void clear_volume();
  double volume() const;
  void set_volume(double value);
  private:
  double _internal_volume() const;
  void _internal_set_volume(double value);
  public:

  // .Trade.protobuf.OrderType type = 4;
  void clear_type();
  ::Trade::protobuf::OrderType type() const;
  void set_type(::Trade::protobuf::OrderType value);
  private:
  ::Trade::protobuf::OrderType _internal_type() const;
  void _internal_set_type(::Trade::protobuf::OrderType value);
  public:

  // @@protoc_insertion_point(class_scope:Trade.protobuf.Order)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr symbol_;
    int32_t id_;
    int side_;
    double price_;
    double volume_;
    int type_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_trade_2eproto;
};
// -------------------------------------------------------------------

class Balance final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Trade.protobuf.Balance) */ {
 public:
  inline Balance() : Balance(nullptr) {}
  ~Balance() override;
  explicit PROTOBUF_CONSTEXPR Balance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Balance(const Balance& from);
  Balance(Balance&& from) noexcept
    : Balance() {
    *this = ::std::move(from);
  }

  inline Balance& operator=(const Balance& from) {
    CopyFrom(from);
    return *this;
  }
  inline Balance& operator=(Balance&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Balance& default_instance() {
    return *internal_default_instance();
  }
  static inline const Balance* internal_default_instance() {
    return reinterpret_cast<const Balance*>(
               &_Balance_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Balance& a, Balance& b) {
    a.Swap(&b);
  }
  inline void Swap(Balance* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Balance* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Balance* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Balance>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Balance& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Balance& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Balance* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Trade.protobuf.Balance";
  }
  protected:
  explicit Balance(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCurrencyFieldNumber = 1,
    kAmountFieldNumber = 2,
  };
  // string currency = 1;
  void clear_currency();
  const std::string& currency() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_currency(ArgT0&& arg0, ArgT... args);
  std::string* mutable_currency();
  PROTOBUF_NODISCARD std::string* release_currency();
  void set_allocated_currency(std::string* currency);
  private:
  const std::string& _internal_currency() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_currency(const std::string& value);
  std::string* _internal_mutable_currency();
  public:

  // double amount = 2;
  void clear_amount();
  double amount() const;
  void set_amount(double value);
  private:
  double _internal_amount() const;
  void _internal_set_amount(double value);
  public:

  // @@protoc_insertion_point(class_scope:Trade.protobuf.Balance)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr currency_;
    double amount_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_trade_2eproto;
};
// -------------------------------------------------------------------

class Account final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Trade.protobuf.Account) */ {
 public:
  inline Account() : Account(nullptr) {}
  ~Account() override;
  explicit PROTOBUF_CONSTEXPR Account(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Account(const Account& from);
  Account(Account&& from) noexcept
    : Account() {
    *this = ::std::move(from);
  }

  inline Account& operator=(const Account& from) {
    CopyFrom(from);
    return *this;
  }
  inline Account& operator=(Account&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Account& default_instance() {
    return *internal_default_instance();
  }
  static inline const Account* internal_default_instance() {
    return reinterpret_cast<const Account*>(
               &_Account_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Account& a, Account& b) {
    a.Swap(&b);
  }
  inline void Swap(Account* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Account* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Account* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Account>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Account& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Account& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Account* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Trade.protobuf.Account";
  }
  protected:
  explicit Account(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kOrdersFieldNumber = 4,
    kNameFieldNumber = 2,
    kWalletFieldNumber = 3,
    kIdFieldNumber = 1,
  };
  // repeated .Trade.protobuf.Order orders = 4;
  int orders_size() const;
  private:
  int _internal_orders_size() const;
  public:
  void clear_orders();
  ::Trade::protobuf::Order* mutable_orders(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Trade::protobuf::Order >*
      mutable_orders();
  private:
  const ::Trade::protobuf::Order& _internal_orders(int index) const;
  ::Trade::protobuf::Order* _internal_add_orders();
  public:
  const ::Trade::protobuf::Order& orders(int index) const;
  ::Trade::protobuf::Order* add_orders();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Trade::protobuf::Order >&
      orders() const;

  // string name = 2;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // .Trade.protobuf.Balance wallet = 3;
  bool has_wallet() const;
  private:
  bool _internal_has_wallet() const;
  public:
  void clear_wallet();
  const ::Trade::protobuf::Balance& wallet() const;
  PROTOBUF_NODISCARD ::Trade::protobuf::Balance* release_wallet();
  ::Trade::protobuf::Balance* mutable_wallet();
  void set_allocated_wallet(::Trade::protobuf::Balance* wallet);
  private:
  const ::Trade::protobuf::Balance& _internal_wallet() const;
  ::Trade::protobuf::Balance* _internal_mutable_wallet();
  public:
  void unsafe_arena_set_allocated_wallet(
      ::Trade::protobuf::Balance* wallet);
  ::Trade::protobuf::Balance* unsafe_arena_release_wallet();

  // int32 id = 1;
  void clear_id();
  int32_t id() const;
  void set_id(int32_t value);
  private:
  int32_t _internal_id() const;
  void _internal_set_id(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:Trade.protobuf.Account)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Trade::protobuf::Order > orders_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    ::Trade::protobuf::Balance* wallet_;
    int32_t id_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_trade_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Order

// int32 id = 1;
inline void Order::clear_id() {
  _impl_.id_ = 0;
}
inline int32_t Order::_internal_id() const {
  return _impl_.id_;
}
inline int32_t Order::id() const {
  // @@protoc_insertion_point(field_get:Trade.protobuf.Order.id)
  return _internal_id();
}
inline void Order::_internal_set_id(int32_t value) {
  
  _impl_.id_ = value;
}
inline void Order::set_id(int32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:Trade.protobuf.Order.id)
}

// string symbol = 2;
inline void Order::clear_symbol() {
  _impl_.symbol_.ClearToEmpty();
}
inline const std::string& Order::symbol() const {
  // @@protoc_insertion_point(field_get:Trade.protobuf.Order.symbol)
  return _internal_symbol();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Order::set_symbol(ArgT0&& arg0, ArgT... args) {
 
 _impl_.symbol_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Trade.protobuf.Order.symbol)
}
inline std::string* Order::mutable_symbol() {
  std::string* _s = _internal_mutable_symbol();
  // @@protoc_insertion_point(field_mutable:Trade.protobuf.Order.symbol)
  return _s;
}
inline const std::string& Order::_internal_symbol() const {
  return _impl_.symbol_.Get();
}
inline void Order::_internal_set_symbol(const std::string& value) {
  
  _impl_.symbol_.Set(value, GetArenaForAllocation());
}
inline std::string* Order::_internal_mutable_symbol() {
  
  return _impl_.symbol_.Mutable(GetArenaForAllocation());
}
inline std::string* Order::release_symbol() {
  // @@protoc_insertion_point(field_release:Trade.protobuf.Order.symbol)
  return _impl_.symbol_.Release();
}
inline void Order::set_allocated_symbol(std::string* symbol) {
  if (symbol != nullptr) {
    
  } else {
    
  }
  _impl_.symbol_.SetAllocated(symbol, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.symbol_.IsDefault()) {
    _impl_.symbol_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Trade.protobuf.Order.symbol)
}

// .Trade.protobuf.OrderSide side = 3;
inline void Order::clear_side() {
  _impl_.side_ = 0;
}
inline ::Trade::protobuf::OrderSide Order::_internal_side() const {
  return static_cast< ::Trade::protobuf::OrderSide >(_impl_.side_);
}
inline ::Trade::protobuf::OrderSide Order::side() const {
  // @@protoc_insertion_point(field_get:Trade.protobuf.Order.side)
  return _internal_side();
}
inline void Order::_internal_set_side(::Trade::protobuf::OrderSide value) {
  
  _impl_.side_ = value;
}
inline void Order::set_side(::Trade::protobuf::OrderSide value) {
  _internal_set_side(value);
  // @@protoc_insertion_point(field_set:Trade.protobuf.Order.side)
}

// .Trade.protobuf.OrderType type = 4;
inline void Order::clear_type() {
  _impl_.type_ = 0;
}
inline ::Trade::protobuf::OrderType Order::_internal_type() const {
  return static_cast< ::Trade::protobuf::OrderType >(_impl_.type_);
}
inline ::Trade::protobuf::OrderType Order::type() const {
  // @@protoc_insertion_point(field_get:Trade.protobuf.Order.type)
  return _internal_type();
}
inline void Order::_internal_set_type(::Trade::protobuf::OrderType value) {
  
  _impl_.type_ = value;
}
inline void Order::set_type(::Trade::protobuf::OrderType value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:Trade.protobuf.Order.type)
}

// double price = 5;
inline void Order::clear_price() {
  _impl_.price_ = 0;
}
inline double Order::_internal_price() const {
  return _impl_.price_;
}
inline double Order::price() const {
  // @@protoc_insertion_point(field_get:Trade.protobuf.Order.price)
  return _internal_price();
}
inline void Order::_internal_set_price(double value) {
  
  _impl_.price_ = value;
}
inline void Order::set_price(double value) {
  _internal_set_price(value);
  // @@protoc_insertion_point(field_set:Trade.protobuf.Order.price)
}

// double volume = 6;
inline void Order::clear_volume() {
  _impl_.volume_ = 0;
}
inline double Order::_internal_volume() const {
  return _impl_.volume_;
}
inline double Order::volume() const {
  // @@protoc_insertion_point(field_get:Trade.protobuf.Order.volume)
  return _internal_volume();
}
inline void Order::_internal_set_volume(double value) {
  
  _impl_.volume_ = value;
}
inline void Order::set_volume(double value) {
  _internal_set_volume(value);
  // @@protoc_insertion_point(field_set:Trade.protobuf.Order.volume)
}

// -------------------------------------------------------------------

// Balance

// string currency = 1;
inline void Balance::clear_currency() {
  _impl_.currency_.ClearToEmpty();
}
inline const std::string& Balance::currency() const {
  // @@protoc_insertion_point(field_get:Trade.protobuf.Balance.currency)
  return _internal_currency();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Balance::set_currency(ArgT0&& arg0, ArgT... args) {
 
 _impl_.currency_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Trade.protobuf.Balance.currency)
}
inline std::string* Balance::mutable_currency() {
  std::string* _s = _internal_mutable_currency();
  // @@protoc_insertion_point(field_mutable:Trade.protobuf.Balance.currency)
  return _s;
}
inline const std::string& Balance::_internal_currency() const {
  return _impl_.currency_.Get();
}
inline void Balance::_internal_set_currency(const std::string& value) {
  
  _impl_.currency_.Set(value, GetArenaForAllocation());
}
inline std::string* Balance::_internal_mutable_currency() {
  
  return _impl_.currency_.Mutable(GetArenaForAllocation());
}
inline std::string* Balance::release_currency() {
  // @@protoc_insertion_point(field_release:Trade.protobuf.Balance.currency)
  return _impl_.currency_.Release();
}
inline void Balance::set_allocated_currency(std::string* currency) {
  if (currency != nullptr) {
    
  } else {
    
  }
  _impl_.currency_.SetAllocated(currency, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.currency_.IsDefault()) {
    _impl_.currency_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Trade.protobuf.Balance.currency)
}

// double amount = 2;
inline void Balance::clear_amount() {
  _impl_.amount_ = 0;
}
inline double Balance::_internal_amount() const {
  return _impl_.amount_;
}
inline double Balance::amount() const {
  // @@protoc_insertion_point(field_get:Trade.protobuf.Balance.amount)
  return _internal_amount();
}
inline void Balance::_internal_set_amount(double value) {
  
  _impl_.amount_ = value;
}
inline void Balance::set_amount(double value) {
  _internal_set_amount(value);
  // @@protoc_insertion_point(field_set:Trade.protobuf.Balance.amount)
}

// -------------------------------------------------------------------

// Account

// int32 id = 1;
inline void Account::clear_id() {
  _impl_.id_ = 0;
}
inline int32_t Account::_internal_id() const {
  return _impl_.id_;
}
inline int32_t Account::id() const {
  // @@protoc_insertion_point(field_get:Trade.protobuf.Account.id)
  return _internal_id();
}
inline void Account::_internal_set_id(int32_t value) {
  
  _impl_.id_ = value;
}
inline void Account::set_id(int32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:Trade.protobuf.Account.id)
}

// string name = 2;
inline void Account::clear_name() {
  _impl_.name_.ClearToEmpty();
}
inline const std::string& Account::name() const {
  // @@protoc_insertion_point(field_get:Trade.protobuf.Account.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Account::set_name(ArgT0&& arg0, ArgT... args) {
 
 _impl_.name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Trade.protobuf.Account.name)
}
inline std::string* Account::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:Trade.protobuf.Account.name)
  return _s;
}
inline const std::string& Account::_internal_name() const {
  return _impl_.name_.Get();
}
inline void Account::_internal_set_name(const std::string& value) {
  
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* Account::_internal_mutable_name() {
  
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* Account::release_name() {
  // @@protoc_insertion_point(field_release:Trade.protobuf.Account.name)
  return _impl_.name_.Release();
}
inline void Account::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  _impl_.name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Trade.protobuf.Account.name)
}

// .Trade.protobuf.Balance wallet = 3;
inline bool Account::_internal_has_wallet() const {
  return this != internal_default_instance() && _impl_.wallet_ != nullptr;
}
inline bool Account::has_wallet() const {
  return _internal_has_wallet();
}
inline void Account::clear_wallet() {
  if (GetArenaForAllocation() == nullptr && _impl_.wallet_ != nullptr) {
    delete _impl_.wallet_;
  }
  _impl_.wallet_ = nullptr;
}
inline const ::Trade::protobuf::Balance& Account::_internal_wallet() const {
  const ::Trade::protobuf::Balance* p = _impl_.wallet_;
  return p != nullptr ? *p : reinterpret_cast<const ::Trade::protobuf::Balance&>(
      ::Trade::protobuf::_Balance_default_instance_);
}
inline const ::Trade::protobuf::Balance& Account::wallet() const {
  // @@protoc_insertion_point(field_get:Trade.protobuf.Account.wallet)
  return _internal_wallet();
}
inline void Account::unsafe_arena_set_allocated_wallet(
    ::Trade::protobuf::Balance* wallet) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.wallet_);
  }
  _impl_.wallet_ = wallet;
  if (wallet) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Trade.protobuf.Account.wallet)
}
inline ::Trade::protobuf::Balance* Account::release_wallet() {
  
  ::Trade::protobuf::Balance* temp = _impl_.wallet_;
  _impl_.wallet_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::Trade::protobuf::Balance* Account::unsafe_arena_release_wallet() {
  // @@protoc_insertion_point(field_release:Trade.protobuf.Account.wallet)
  
  ::Trade::protobuf::Balance* temp = _impl_.wallet_;
  _impl_.wallet_ = nullptr;
  return temp;
}
inline ::Trade::protobuf::Balance* Account::_internal_mutable_wallet() {
  
  if (_impl_.wallet_ == nullptr) {
    auto* p = CreateMaybeMessage<::Trade::protobuf::Balance>(GetArenaForAllocation());
    _impl_.wallet_ = p;
  }
  return _impl_.wallet_;
}
inline ::Trade::protobuf::Balance* Account::mutable_wallet() {
  ::Trade::protobuf::Balance* _msg = _internal_mutable_wallet();
  // @@protoc_insertion_point(field_mutable:Trade.protobuf.Account.wallet)
  return _msg;
}
inline void Account::set_allocated_wallet(::Trade::protobuf::Balance* wallet) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete _impl_.wallet_;
  }
  if (wallet) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(wallet);
    if (message_arena != submessage_arena) {
      wallet = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, wallet, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.wallet_ = wallet;
  // @@protoc_insertion_point(field_set_allocated:Trade.protobuf.Account.wallet)
}

// repeated .Trade.protobuf.Order orders = 4;
inline int Account::_internal_orders_size() const {
  return _impl_.orders_.size();
}
inline int Account::orders_size() const {
  return _internal_orders_size();
}
inline void Account::clear_orders() {
  _impl_.orders_.Clear();
}
inline ::Trade::protobuf::Order* Account::mutable_orders(int index) {
  // @@protoc_insertion_point(field_mutable:Trade.protobuf.Account.orders)
  return _impl_.orders_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Trade::protobuf::Order >*
Account::mutable_orders() {
  // @@protoc_insertion_point(field_mutable_list:Trade.protobuf.Account.orders)
  return &_impl_.orders_;
}
inline const ::Trade::protobuf::Order& Account::_internal_orders(int index) const {
  return _impl_.orders_.Get(index);
}
inline const ::Trade::protobuf::Order& Account::orders(int index) const {
  // @@protoc_insertion_point(field_get:Trade.protobuf.Account.orders)
  return _internal_orders(index);
}
inline ::Trade::protobuf::Order* Account::_internal_add_orders() {
  return _impl_.orders_.Add();
}
inline ::Trade::protobuf::Order* Account::add_orders() {
  ::Trade::protobuf::Order* _add = _internal_add_orders();
  // @@protoc_insertion_point(field_add:Trade.protobuf.Account.orders)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Trade::protobuf::Order >&
Account::orders() const {
  // @@protoc_insertion_point(field_list:Trade.protobuf.Account.orders)
  return _impl_.orders_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace Trade

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::Trade::protobuf::OrderSide> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Trade::protobuf::OrderSide>() {
  return ::Trade::protobuf::OrderSide_descriptor();
}
template <> struct is_proto_enum< ::Trade::protobuf::OrderType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Trade::protobuf::OrderType>() {
  return ::Trade::protobuf::OrderType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_trade_2eproto
