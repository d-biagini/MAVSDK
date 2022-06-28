// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: offboard_server/offboard_server.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_offboard_5fserver_2foffboard_5fserver_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_offboard_5fserver_2foffboard_5fserver_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3020000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3020001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_bases.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "mavsdk_options.pb.h"
#include "offboard/offboard.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_offboard_5fserver_2foffboard_5fserver_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_offboard_5fserver_2foffboard_5fserver_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_offboard_5fserver_2foffboard_5fserver_2eproto;
namespace mavsdk {
namespace rpc {
namespace offboard_server {
class PositionGlobalYaw;
struct PositionGlobalYawDefaultTypeInternal;
extern PositionGlobalYawDefaultTypeInternal _PositionGlobalYaw_default_instance_;
class SubscribePositionTargetGlobalRequest;
struct SubscribePositionTargetGlobalRequestDefaultTypeInternal;
extern SubscribePositionTargetGlobalRequestDefaultTypeInternal _SubscribePositionTargetGlobalRequest_default_instance_;
class SubscribePositionTargetGlobalResponse;
struct SubscribePositionTargetGlobalResponseDefaultTypeInternal;
extern SubscribePositionTargetGlobalResponseDefaultTypeInternal _SubscribePositionTargetGlobalResponse_default_instance_;
}  // namespace offboard_server
}  // namespace rpc
}  // namespace mavsdk
PROTOBUF_NAMESPACE_OPEN
template<> ::mavsdk::rpc::offboard_server::PositionGlobalYaw* Arena::CreateMaybeMessage<::mavsdk::rpc::offboard_server::PositionGlobalYaw>(Arena*);
template<> ::mavsdk::rpc::offboard_server::SubscribePositionTargetGlobalRequest* Arena::CreateMaybeMessage<::mavsdk::rpc::offboard_server::SubscribePositionTargetGlobalRequest>(Arena*);
template<> ::mavsdk::rpc::offboard_server::SubscribePositionTargetGlobalResponse* Arena::CreateMaybeMessage<::mavsdk::rpc::offboard_server::SubscribePositionTargetGlobalResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace mavsdk {
namespace rpc {
namespace offboard_server {

enum PositionGlobalYaw_AltitudeType : int {
  PositionGlobalYaw_AltitudeType_ALTITUDE_TYPE_REL_HOME = 0,
  PositionGlobalYaw_AltitudeType_ALTITUDE_TYPE_AMSL = 1,
  PositionGlobalYaw_AltitudeType_ALTITUDE_TYPE_AGL = 2,
  PositionGlobalYaw_AltitudeType_PositionGlobalYaw_AltitudeType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  PositionGlobalYaw_AltitudeType_PositionGlobalYaw_AltitudeType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool PositionGlobalYaw_AltitudeType_IsValid(int value);
constexpr PositionGlobalYaw_AltitudeType PositionGlobalYaw_AltitudeType_AltitudeType_MIN = PositionGlobalYaw_AltitudeType_ALTITUDE_TYPE_REL_HOME;
constexpr PositionGlobalYaw_AltitudeType PositionGlobalYaw_AltitudeType_AltitudeType_MAX = PositionGlobalYaw_AltitudeType_ALTITUDE_TYPE_AGL;
constexpr int PositionGlobalYaw_AltitudeType_AltitudeType_ARRAYSIZE = PositionGlobalYaw_AltitudeType_AltitudeType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* PositionGlobalYaw_AltitudeType_descriptor();
template<typename T>
inline const std::string& PositionGlobalYaw_AltitudeType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, PositionGlobalYaw_AltitudeType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function PositionGlobalYaw_AltitudeType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    PositionGlobalYaw_AltitudeType_descriptor(), enum_t_value);
}
inline bool PositionGlobalYaw_AltitudeType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, PositionGlobalYaw_AltitudeType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<PositionGlobalYaw_AltitudeType>(
    PositionGlobalYaw_AltitudeType_descriptor(), name, value);
}
// ===================================================================

class SubscribePositionTargetGlobalRequest final :
    public ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase /* @@protoc_insertion_point(class_definition:mavsdk.rpc.offboard_server.SubscribePositionTargetGlobalRequest) */ {
 public:
  inline SubscribePositionTargetGlobalRequest() : SubscribePositionTargetGlobalRequest(nullptr) {}
  explicit PROTOBUF_CONSTEXPR SubscribePositionTargetGlobalRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SubscribePositionTargetGlobalRequest(const SubscribePositionTargetGlobalRequest& from);
  SubscribePositionTargetGlobalRequest(SubscribePositionTargetGlobalRequest&& from) noexcept
    : SubscribePositionTargetGlobalRequest() {
    *this = ::std::move(from);
  }

  inline SubscribePositionTargetGlobalRequest& operator=(const SubscribePositionTargetGlobalRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline SubscribePositionTargetGlobalRequest& operator=(SubscribePositionTargetGlobalRequest&& from) noexcept {
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
  static const SubscribePositionTargetGlobalRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const SubscribePositionTargetGlobalRequest* internal_default_instance() {
    return reinterpret_cast<const SubscribePositionTargetGlobalRequest*>(
               &_SubscribePositionTargetGlobalRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SubscribePositionTargetGlobalRequest& a, SubscribePositionTargetGlobalRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(SubscribePositionTargetGlobalRequest* other) {
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
  void UnsafeArenaSwap(SubscribePositionTargetGlobalRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SubscribePositionTargetGlobalRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SubscribePositionTargetGlobalRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const SubscribePositionTargetGlobalRequest& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl(this, from);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const SubscribePositionTargetGlobalRequest& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl(this, from);
  }
  public:

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mavsdk.rpc.offboard_server.SubscribePositionTargetGlobalRequest";
  }
  protected:
  explicit SubscribePositionTargetGlobalRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:mavsdk.rpc.offboard_server.SubscribePositionTargetGlobalRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  friend struct ::TableStruct_offboard_5fserver_2foffboard_5fserver_2eproto;
};
// -------------------------------------------------------------------

class SubscribePositionTargetGlobalResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mavsdk.rpc.offboard_server.SubscribePositionTargetGlobalResponse) */ {
 public:
  inline SubscribePositionTargetGlobalResponse() : SubscribePositionTargetGlobalResponse(nullptr) {}
  ~SubscribePositionTargetGlobalResponse() override;
  explicit PROTOBUF_CONSTEXPR SubscribePositionTargetGlobalResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SubscribePositionTargetGlobalResponse(const SubscribePositionTargetGlobalResponse& from);
  SubscribePositionTargetGlobalResponse(SubscribePositionTargetGlobalResponse&& from) noexcept
    : SubscribePositionTargetGlobalResponse() {
    *this = ::std::move(from);
  }

  inline SubscribePositionTargetGlobalResponse& operator=(const SubscribePositionTargetGlobalResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline SubscribePositionTargetGlobalResponse& operator=(SubscribePositionTargetGlobalResponse&& from) noexcept {
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
  static const SubscribePositionTargetGlobalResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const SubscribePositionTargetGlobalResponse* internal_default_instance() {
    return reinterpret_cast<const SubscribePositionTargetGlobalResponse*>(
               &_SubscribePositionTargetGlobalResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(SubscribePositionTargetGlobalResponse& a, SubscribePositionTargetGlobalResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(SubscribePositionTargetGlobalResponse* other) {
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
  void UnsafeArenaSwap(SubscribePositionTargetGlobalResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SubscribePositionTargetGlobalResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SubscribePositionTargetGlobalResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SubscribePositionTargetGlobalResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const SubscribePositionTargetGlobalResponse& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SubscribePositionTargetGlobalResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mavsdk.rpc.offboard_server.SubscribePositionTargetGlobalResponse";
  }
  protected:
  explicit SubscribePositionTargetGlobalResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPositionGlobalYawFieldNumber = 1,
  };
  // .mavsdk.rpc.offboard_server.PositionGlobalYaw position_global_yaw = 1;
  bool has_position_global_yaw() const;
  private:
  bool _internal_has_position_global_yaw() const;
  public:
  void clear_position_global_yaw();
  const ::mavsdk::rpc::offboard_server::PositionGlobalYaw& position_global_yaw() const;
  PROTOBUF_NODISCARD ::mavsdk::rpc::offboard_server::PositionGlobalYaw* release_position_global_yaw();
  ::mavsdk::rpc::offboard_server::PositionGlobalYaw* mutable_position_global_yaw();
  void set_allocated_position_global_yaw(::mavsdk::rpc::offboard_server::PositionGlobalYaw* position_global_yaw);
  private:
  const ::mavsdk::rpc::offboard_server::PositionGlobalYaw& _internal_position_global_yaw() const;
  ::mavsdk::rpc::offboard_server::PositionGlobalYaw* _internal_mutable_position_global_yaw();
  public:
  void unsafe_arena_set_allocated_position_global_yaw(
      ::mavsdk::rpc::offboard_server::PositionGlobalYaw* position_global_yaw);
  ::mavsdk::rpc::offboard_server::PositionGlobalYaw* unsafe_arena_release_position_global_yaw();

  // @@protoc_insertion_point(class_scope:mavsdk.rpc.offboard_server.SubscribePositionTargetGlobalResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::mavsdk::rpc::offboard_server::PositionGlobalYaw* position_global_yaw_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_offboard_5fserver_2foffboard_5fserver_2eproto;
};
// -------------------------------------------------------------------

class PositionGlobalYaw final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mavsdk.rpc.offboard_server.PositionGlobalYaw) */ {
 public:
  inline PositionGlobalYaw() : PositionGlobalYaw(nullptr) {}
  ~PositionGlobalYaw() override;
  explicit PROTOBUF_CONSTEXPR PositionGlobalYaw(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PositionGlobalYaw(const PositionGlobalYaw& from);
  PositionGlobalYaw(PositionGlobalYaw&& from) noexcept
    : PositionGlobalYaw() {
    *this = ::std::move(from);
  }

  inline PositionGlobalYaw& operator=(const PositionGlobalYaw& from) {
    CopyFrom(from);
    return *this;
  }
  inline PositionGlobalYaw& operator=(PositionGlobalYaw&& from) noexcept {
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
  static const PositionGlobalYaw& default_instance() {
    return *internal_default_instance();
  }
  static inline const PositionGlobalYaw* internal_default_instance() {
    return reinterpret_cast<const PositionGlobalYaw*>(
               &_PositionGlobalYaw_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(PositionGlobalYaw& a, PositionGlobalYaw& b) {
    a.Swap(&b);
  }
  inline void Swap(PositionGlobalYaw* other) {
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
  void UnsafeArenaSwap(PositionGlobalYaw* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PositionGlobalYaw* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PositionGlobalYaw>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const PositionGlobalYaw& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const PositionGlobalYaw& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PositionGlobalYaw* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mavsdk.rpc.offboard_server.PositionGlobalYaw";
  }
  protected:
  explicit PositionGlobalYaw(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef PositionGlobalYaw_AltitudeType AltitudeType;
  static constexpr AltitudeType ALTITUDE_TYPE_REL_HOME =
    PositionGlobalYaw_AltitudeType_ALTITUDE_TYPE_REL_HOME;
  static constexpr AltitudeType ALTITUDE_TYPE_AMSL =
    PositionGlobalYaw_AltitudeType_ALTITUDE_TYPE_AMSL;
  static constexpr AltitudeType ALTITUDE_TYPE_AGL =
    PositionGlobalYaw_AltitudeType_ALTITUDE_TYPE_AGL;
  static inline bool AltitudeType_IsValid(int value) {
    return PositionGlobalYaw_AltitudeType_IsValid(value);
  }
  static constexpr AltitudeType AltitudeType_MIN =
    PositionGlobalYaw_AltitudeType_AltitudeType_MIN;
  static constexpr AltitudeType AltitudeType_MAX =
    PositionGlobalYaw_AltitudeType_AltitudeType_MAX;
  static constexpr int AltitudeType_ARRAYSIZE =
    PositionGlobalYaw_AltitudeType_AltitudeType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  AltitudeType_descriptor() {
    return PositionGlobalYaw_AltitudeType_descriptor();
  }
  template<typename T>
  static inline const std::string& AltitudeType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, AltitudeType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function AltitudeType_Name.");
    return PositionGlobalYaw_AltitudeType_Name(enum_t_value);
  }
  static inline bool AltitudeType_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      AltitudeType* value) {
    return PositionGlobalYaw_AltitudeType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kLatDegFieldNumber = 1,
    kLonDegFieldNumber = 2,
    kAltMFieldNumber = 3,
    kYawDegFieldNumber = 4,
    kAltitudeTypeFieldNumber = 5,
  };
  // double lat_deg = 1;
  void clear_lat_deg();
  double lat_deg() const;
  void set_lat_deg(double value);
  private:
  double _internal_lat_deg() const;
  void _internal_set_lat_deg(double value);
  public:

  // double lon_deg = 2;
  void clear_lon_deg();
  double lon_deg() const;
  void set_lon_deg(double value);
  private:
  double _internal_lon_deg() const;
  void _internal_set_lon_deg(double value);
  public:

  // float alt_m = 3;
  void clear_alt_m();
  float alt_m() const;
  void set_alt_m(float value);
  private:
  float _internal_alt_m() const;
  void _internal_set_alt_m(float value);
  public:

  // float yaw_deg = 4;
  void clear_yaw_deg();
  float yaw_deg() const;
  void set_yaw_deg(float value);
  private:
  float _internal_yaw_deg() const;
  void _internal_set_yaw_deg(float value);
  public:

  // .mavsdk.rpc.offboard_server.PositionGlobalYaw.AltitudeType altitude_type = 5;
  void clear_altitude_type();
  ::mavsdk::rpc::offboard_server::PositionGlobalYaw_AltitudeType altitude_type() const;
  void set_altitude_type(::mavsdk::rpc::offboard_server::PositionGlobalYaw_AltitudeType value);
  private:
  ::mavsdk::rpc::offboard_server::PositionGlobalYaw_AltitudeType _internal_altitude_type() const;
  void _internal_set_altitude_type(::mavsdk::rpc::offboard_server::PositionGlobalYaw_AltitudeType value);
  public:

  // @@protoc_insertion_point(class_scope:mavsdk.rpc.offboard_server.PositionGlobalYaw)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  double lat_deg_;
  double lon_deg_;
  float alt_m_;
  float yaw_deg_;
  int altitude_type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_offboard_5fserver_2foffboard_5fserver_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SubscribePositionTargetGlobalRequest

// -------------------------------------------------------------------

// SubscribePositionTargetGlobalResponse

// .mavsdk.rpc.offboard_server.PositionGlobalYaw position_global_yaw = 1;
inline bool SubscribePositionTargetGlobalResponse::_internal_has_position_global_yaw() const {
  return this != internal_default_instance() && position_global_yaw_ != nullptr;
}
inline bool SubscribePositionTargetGlobalResponse::has_position_global_yaw() const {
  return _internal_has_position_global_yaw();
}
inline void SubscribePositionTargetGlobalResponse::clear_position_global_yaw() {
  if (GetArenaForAllocation() == nullptr && position_global_yaw_ != nullptr) {
    delete position_global_yaw_;
  }
  position_global_yaw_ = nullptr;
}
inline const ::mavsdk::rpc::offboard_server::PositionGlobalYaw& SubscribePositionTargetGlobalResponse::_internal_position_global_yaw() const {
  const ::mavsdk::rpc::offboard_server::PositionGlobalYaw* p = position_global_yaw_;
  return p != nullptr ? *p : reinterpret_cast<const ::mavsdk::rpc::offboard_server::PositionGlobalYaw&>(
      ::mavsdk::rpc::offboard_server::_PositionGlobalYaw_default_instance_);
}
inline const ::mavsdk::rpc::offboard_server::PositionGlobalYaw& SubscribePositionTargetGlobalResponse::position_global_yaw() const {
  // @@protoc_insertion_point(field_get:mavsdk.rpc.offboard_server.SubscribePositionTargetGlobalResponse.position_global_yaw)
  return _internal_position_global_yaw();
}
inline void SubscribePositionTargetGlobalResponse::unsafe_arena_set_allocated_position_global_yaw(
    ::mavsdk::rpc::offboard_server::PositionGlobalYaw* position_global_yaw) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(position_global_yaw_);
  }
  position_global_yaw_ = position_global_yaw;
  if (position_global_yaw) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:mavsdk.rpc.offboard_server.SubscribePositionTargetGlobalResponse.position_global_yaw)
}
inline ::mavsdk::rpc::offboard_server::PositionGlobalYaw* SubscribePositionTargetGlobalResponse::release_position_global_yaw() {
  
  ::mavsdk::rpc::offboard_server::PositionGlobalYaw* temp = position_global_yaw_;
  position_global_yaw_ = nullptr;
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
inline ::mavsdk::rpc::offboard_server::PositionGlobalYaw* SubscribePositionTargetGlobalResponse::unsafe_arena_release_position_global_yaw() {
  // @@protoc_insertion_point(field_release:mavsdk.rpc.offboard_server.SubscribePositionTargetGlobalResponse.position_global_yaw)
  
  ::mavsdk::rpc::offboard_server::PositionGlobalYaw* temp = position_global_yaw_;
  position_global_yaw_ = nullptr;
  return temp;
}
inline ::mavsdk::rpc::offboard_server::PositionGlobalYaw* SubscribePositionTargetGlobalResponse::_internal_mutable_position_global_yaw() {
  
  if (position_global_yaw_ == nullptr) {
    auto* p = CreateMaybeMessage<::mavsdk::rpc::offboard_server::PositionGlobalYaw>(GetArenaForAllocation());
    position_global_yaw_ = p;
  }
  return position_global_yaw_;
}
inline ::mavsdk::rpc::offboard_server::PositionGlobalYaw* SubscribePositionTargetGlobalResponse::mutable_position_global_yaw() {
  ::mavsdk::rpc::offboard_server::PositionGlobalYaw* _msg = _internal_mutable_position_global_yaw();
  // @@protoc_insertion_point(field_mutable:mavsdk.rpc.offboard_server.SubscribePositionTargetGlobalResponse.position_global_yaw)
  return _msg;
}
inline void SubscribePositionTargetGlobalResponse::set_allocated_position_global_yaw(::mavsdk::rpc::offboard_server::PositionGlobalYaw* position_global_yaw) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete position_global_yaw_;
  }
  if (position_global_yaw) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(position_global_yaw);
    if (message_arena != submessage_arena) {
      position_global_yaw = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, position_global_yaw, submessage_arena);
    }
    
  } else {
    
  }
  position_global_yaw_ = position_global_yaw;
  // @@protoc_insertion_point(field_set_allocated:mavsdk.rpc.offboard_server.SubscribePositionTargetGlobalResponse.position_global_yaw)
}

// -------------------------------------------------------------------

// PositionGlobalYaw

// double lat_deg = 1;
inline void PositionGlobalYaw::clear_lat_deg() {
  lat_deg_ = 0;
}
inline double PositionGlobalYaw::_internal_lat_deg() const {
  return lat_deg_;
}
inline double PositionGlobalYaw::lat_deg() const {
  // @@protoc_insertion_point(field_get:mavsdk.rpc.offboard_server.PositionGlobalYaw.lat_deg)
  return _internal_lat_deg();
}
inline void PositionGlobalYaw::_internal_set_lat_deg(double value) {
  
  lat_deg_ = value;
}
inline void PositionGlobalYaw::set_lat_deg(double value) {
  _internal_set_lat_deg(value);
  // @@protoc_insertion_point(field_set:mavsdk.rpc.offboard_server.PositionGlobalYaw.lat_deg)
}

// double lon_deg = 2;
inline void PositionGlobalYaw::clear_lon_deg() {
  lon_deg_ = 0;
}
inline double PositionGlobalYaw::_internal_lon_deg() const {
  return lon_deg_;
}
inline double PositionGlobalYaw::lon_deg() const {
  // @@protoc_insertion_point(field_get:mavsdk.rpc.offboard_server.PositionGlobalYaw.lon_deg)
  return _internal_lon_deg();
}
inline void PositionGlobalYaw::_internal_set_lon_deg(double value) {
  
  lon_deg_ = value;
}
inline void PositionGlobalYaw::set_lon_deg(double value) {
  _internal_set_lon_deg(value);
  // @@protoc_insertion_point(field_set:mavsdk.rpc.offboard_server.PositionGlobalYaw.lon_deg)
}

// float alt_m = 3;
inline void PositionGlobalYaw::clear_alt_m() {
  alt_m_ = 0;
}
inline float PositionGlobalYaw::_internal_alt_m() const {
  return alt_m_;
}
inline float PositionGlobalYaw::alt_m() const {
  // @@protoc_insertion_point(field_get:mavsdk.rpc.offboard_server.PositionGlobalYaw.alt_m)
  return _internal_alt_m();
}
inline void PositionGlobalYaw::_internal_set_alt_m(float value) {
  
  alt_m_ = value;
}
inline void PositionGlobalYaw::set_alt_m(float value) {
  _internal_set_alt_m(value);
  // @@protoc_insertion_point(field_set:mavsdk.rpc.offboard_server.PositionGlobalYaw.alt_m)
}

// float yaw_deg = 4;
inline void PositionGlobalYaw::clear_yaw_deg() {
  yaw_deg_ = 0;
}
inline float PositionGlobalYaw::_internal_yaw_deg() const {
  return yaw_deg_;
}
inline float PositionGlobalYaw::yaw_deg() const {
  // @@protoc_insertion_point(field_get:mavsdk.rpc.offboard_server.PositionGlobalYaw.yaw_deg)
  return _internal_yaw_deg();
}
inline void PositionGlobalYaw::_internal_set_yaw_deg(float value) {
  
  yaw_deg_ = value;
}
inline void PositionGlobalYaw::set_yaw_deg(float value) {
  _internal_set_yaw_deg(value);
  // @@protoc_insertion_point(field_set:mavsdk.rpc.offboard_server.PositionGlobalYaw.yaw_deg)
}

// .mavsdk.rpc.offboard_server.PositionGlobalYaw.AltitudeType altitude_type = 5;
inline void PositionGlobalYaw::clear_altitude_type() {
  altitude_type_ = 0;
}
inline ::mavsdk::rpc::offboard_server::PositionGlobalYaw_AltitudeType PositionGlobalYaw::_internal_altitude_type() const {
  return static_cast< ::mavsdk::rpc::offboard_server::PositionGlobalYaw_AltitudeType >(altitude_type_);
}
inline ::mavsdk::rpc::offboard_server::PositionGlobalYaw_AltitudeType PositionGlobalYaw::altitude_type() const {
  // @@protoc_insertion_point(field_get:mavsdk.rpc.offboard_server.PositionGlobalYaw.altitude_type)
  return _internal_altitude_type();
}
inline void PositionGlobalYaw::_internal_set_altitude_type(::mavsdk::rpc::offboard_server::PositionGlobalYaw_AltitudeType value) {
  
  altitude_type_ = value;
}
inline void PositionGlobalYaw::set_altitude_type(::mavsdk::rpc::offboard_server::PositionGlobalYaw_AltitudeType value) {
  _internal_set_altitude_type(value);
  // @@protoc_insertion_point(field_set:mavsdk.rpc.offboard_server.PositionGlobalYaw.altitude_type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace offboard_server
}  // namespace rpc
}  // namespace mavsdk

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::mavsdk::rpc::offboard_server::PositionGlobalYaw_AltitudeType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::mavsdk::rpc::offboard_server::PositionGlobalYaw_AltitudeType>() {
  return ::mavsdk::rpc::offboard_server::PositionGlobalYaw_AltitudeType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_offboard_5fserver_2foffboard_5fserver_2eproto
