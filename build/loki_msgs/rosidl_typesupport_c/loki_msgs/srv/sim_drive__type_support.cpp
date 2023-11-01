// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from loki_msgs:srv/SimDrive.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "loki_msgs/srv/detail/sim_drive__struct.h"
#include "loki_msgs/srv/detail/sim_drive__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace loki_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SimDrive_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SimDrive_Request_type_support_ids_t;

static const _SimDrive_Request_type_support_ids_t _SimDrive_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SimDrive_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SimDrive_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SimDrive_Request_type_support_symbol_names_t _SimDrive_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, loki_msgs, srv, SimDrive_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, srv, SimDrive_Request)),
  }
};

typedef struct _SimDrive_Request_type_support_data_t
{
  void * data[2];
} _SimDrive_Request_type_support_data_t;

static _SimDrive_Request_type_support_data_t _SimDrive_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SimDrive_Request_message_typesupport_map = {
  2,
  "loki_msgs",
  &_SimDrive_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SimDrive_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SimDrive_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SimDrive_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SimDrive_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace loki_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, loki_msgs, srv, SimDrive_Request)() {
  return &::loki_msgs::srv::rosidl_typesupport_c::SimDrive_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "loki_msgs/srv/detail/sim_drive__struct.h"
// already included above
// #include "loki_msgs/srv/detail/sim_drive__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace loki_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SimDrive_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SimDrive_Response_type_support_ids_t;

static const _SimDrive_Response_type_support_ids_t _SimDrive_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SimDrive_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SimDrive_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SimDrive_Response_type_support_symbol_names_t _SimDrive_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, loki_msgs, srv, SimDrive_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, srv, SimDrive_Response)),
  }
};

typedef struct _SimDrive_Response_type_support_data_t
{
  void * data[2];
} _SimDrive_Response_type_support_data_t;

static _SimDrive_Response_type_support_data_t _SimDrive_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SimDrive_Response_message_typesupport_map = {
  2,
  "loki_msgs",
  &_SimDrive_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SimDrive_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SimDrive_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SimDrive_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SimDrive_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace loki_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, loki_msgs, srv, SimDrive_Response)() {
  return &::loki_msgs::srv::rosidl_typesupport_c::SimDrive_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "loki_msgs/srv/detail/sim_drive__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace loki_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SimDrive_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SimDrive_type_support_ids_t;

static const _SimDrive_type_support_ids_t _SimDrive_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SimDrive_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SimDrive_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SimDrive_type_support_symbol_names_t _SimDrive_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, loki_msgs, srv, SimDrive)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, loki_msgs, srv, SimDrive)),
  }
};

typedef struct _SimDrive_type_support_data_t
{
  void * data[2];
} _SimDrive_type_support_data_t;

static _SimDrive_type_support_data_t _SimDrive_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SimDrive_service_typesupport_map = {
  2,
  "loki_msgs",
  &_SimDrive_service_typesupport_ids.typesupport_identifier[0],
  &_SimDrive_service_typesupport_symbol_names.symbol_name[0],
  &_SimDrive_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SimDrive_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SimDrive_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace loki_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, loki_msgs, srv, SimDrive)() {
  return &::loki_msgs::srv::rosidl_typesupport_c::SimDrive_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
