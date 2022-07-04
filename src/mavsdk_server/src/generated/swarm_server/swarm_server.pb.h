// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: swarm_server/swarm_server.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_swarm_5fserver_2fswarm_5fserver_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_swarm_5fserver_2fswarm_5fserver_2eproto

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
#include <google/protobuf/unknown_field_set.h>
#include "mavsdk_options.pb.h"
#include "mavsdk_common.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_swarm_5fserver_2fswarm_5fserver_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_swarm_5fserver_2fswarm_5fserver_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_swarm_5fserver_2fswarm_5fserver_2eproto;
namespace mavsdk {
namespace rpc {
namespace swarm_server {
class SubscribePositionTargetGlobalRequest;
struct SubscribePositionTargetGlobalRequestDefaultTypeInternal;
extern SubscribePositionTargetGlobalRequestDefaultTypeInternal _SubscribePositionTargetGlobalRequest_default_instance_;
class SubscribePositionTargetGlobalResponse;
struct SubscribePositionTargetGlobalResponseDefaultTypeInternal;
extern SubscribePositionTargetGlobalResponseDefaultTypeInternal _SubscribePositionTargetGlobalResponse_default_instance_;
}  // namespace swarm_server
}  // namespace rpc
}  // namespace mavsdk
PROTOBUF_NAMESPACE_OPEN
template<> ::mavsdk::rpc::swarm_server::SubscribePositionTargetGlobalRequest* Arena::CreateMaybeMessage<::mavsdk::rpc::swarm_server::SubscribePositionTargetGlobalRequest>(Arena*);
template<> ::mavsdk::rpc::swarm_server::SubscribePositionTargetGlobalResponse* Arena::CreateMaybeMessage<::mavsdk::rpc::swarm_server::SubscribePositionTargetGlobalResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace mavsdk {
namespace rpc {
namespace swarm_server {

// ===================================================================

class SubscribePositionTargetGlobalRequest final :
    public ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase /* @@protoc_insertion_point(class_definition:mavsdk.rpc.swarm_server.SubscribePositionTargetGlobalRequest) */ {
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
    return "mavsdk.rpc.swarm_server.SubscribePositionTargetGlobalRequest";
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

  // @@protoc_insertion_point(class_scope:mavsdk.rpc.swarm_server.SubscribePositionTargetGlobalRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  friend struct ::TableStruct_swarm_5fserver_2fswarm_5fserver_2eproto;
};
// -------------------------------------------------------------------

class SubscribePositionTargetGlobalResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mavsdk.rpc.swarm_server.SubscribePositionTargetGlobalResponse) */ {
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
    return "mavsdk.rpc.swarm_server.SubscribePositionTargetGlobalResponse";
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
  // .mavsdk.common.PositionGlobalYaw position_global_yaw = 1;
  bool has_position_global_yaw() const;
  private:
  bool _internal_has_position_global_yaw() const;
  public:
  void clear_position_global_yaw();
  const ::mavsdk::common::PositionGlobalYaw& position_global_yaw() const;
  PROTOBUF_NODISCARD ::mavsdk::common::PositionGlobalYaw* release_position_global_yaw();
  ::mavsdk::common::PositionGlobalYaw* mutable_position_global_yaw();
  void set_allocated_position_global_yaw(::mavsdk::common::PositionGlobalYaw* position_global_yaw);
  private:
  const ::mavsdk::common::PositionGlobalYaw& _internal_position_global_yaw() const;
  ::mavsdk::common::PositionGlobalYaw* _internal_mutable_position_global_yaw();
  public:
  void unsafe_arena_set_allocated_position_global_yaw(
      ::mavsdk::common::PositionGlobalYaw* position_global_yaw);
  ::mavsdk::common::PositionGlobalYaw* unsafe_arena_release_position_global_yaw();

  // @@protoc_insertion_point(class_scope:mavsdk.rpc.swarm_server.SubscribePositionTargetGlobalResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::mavsdk::common::PositionGlobalYaw* position_global_yaw_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_swarm_5fserver_2fswarm_5fserver_2eproto;
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

// .mavsdk.common.PositionGlobalYaw position_global_yaw = 1;
inline bool SubscribePositionTargetGlobalResponse::_internal_has_position_global_yaw() const {
  return this != internal_default_instance() && position_global_yaw_ != nullptr;
}
inline bool SubscribePositionTargetGlobalResponse::has_position_global_yaw() const {
  return _internal_has_position_global_yaw();
}
inline const ::mavsdk::common::PositionGlobalYaw& SubscribePositionTargetGlobalResponse::_internal_position_global_yaw() const {
  const ::mavsdk::common::PositionGlobalYaw* p = position_global_yaw_;
  return p != nullptr ? *p : reinterpret_cast<const ::mavsdk::common::PositionGlobalYaw&>(
      ::mavsdk::common::_PositionGlobalYaw_default_instance_);
}
inline const ::mavsdk::common::PositionGlobalYaw& SubscribePositionTargetGlobalResponse::position_global_yaw() const {
  // @@protoc_insertion_point(field_get:mavsdk.rpc.swarm_server.SubscribePositionTargetGlobalResponse.position_global_yaw)
  return _internal_position_global_yaw();
}
inline void SubscribePositionTargetGlobalResponse::unsafe_arena_set_allocated_position_global_yaw(
    ::mavsdk::common::PositionGlobalYaw* position_global_yaw) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(position_global_yaw_);
  }
  position_global_yaw_ = position_global_yaw;
  if (position_global_yaw) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:mavsdk.rpc.swarm_server.SubscribePositionTargetGlobalResponse.position_global_yaw)
}
inline ::mavsdk::common::PositionGlobalYaw* SubscribePositionTargetGlobalResponse::release_position_global_yaw() {
  
  ::mavsdk::common::PositionGlobalYaw* temp = position_global_yaw_;
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
inline ::mavsdk::common::PositionGlobalYaw* SubscribePositionTargetGlobalResponse::unsafe_arena_release_position_global_yaw() {
  // @@protoc_insertion_point(field_release:mavsdk.rpc.swarm_server.SubscribePositionTargetGlobalResponse.position_global_yaw)
  
  ::mavsdk::common::PositionGlobalYaw* temp = position_global_yaw_;
  position_global_yaw_ = nullptr;
  return temp;
}
inline ::mavsdk::common::PositionGlobalYaw* SubscribePositionTargetGlobalResponse::_internal_mutable_position_global_yaw() {
  
  if (position_global_yaw_ == nullptr) {
    auto* p = CreateMaybeMessage<::mavsdk::common::PositionGlobalYaw>(GetArenaForAllocation());
    position_global_yaw_ = p;
  }
  return position_global_yaw_;
}
inline ::mavsdk::common::PositionGlobalYaw* SubscribePositionTargetGlobalResponse::mutable_position_global_yaw() {
  ::mavsdk::common::PositionGlobalYaw* _msg = _internal_mutable_position_global_yaw();
  // @@protoc_insertion_point(field_mutable:mavsdk.rpc.swarm_server.SubscribePositionTargetGlobalResponse.position_global_yaw)
  return _msg;
}
inline void SubscribePositionTargetGlobalResponse::set_allocated_position_global_yaw(::mavsdk::common::PositionGlobalYaw* position_global_yaw) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(position_global_yaw_);
  }
  if (position_global_yaw) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(position_global_yaw));
    if (message_arena != submessage_arena) {
      position_global_yaw = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, position_global_yaw, submessage_arena);
    }
    
  } else {
    
  }
  position_global_yaw_ = position_global_yaw;
  // @@protoc_insertion_point(field_set_allocated:mavsdk.rpc.swarm_server.SubscribePositionTargetGlobalResponse.position_global_yaw)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace swarm_server
}  // namespace rpc
}  // namespace mavsdk

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_swarm_5fserver_2fswarm_5fserver_2eproto
