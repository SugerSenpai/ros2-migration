# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cob_srvs:srv/Dock.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Dock_Request(type):
    """Metaclass of message 'Dock_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cob_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cob_srvs.srv.Dock_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__dock__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__dock__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__dock__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__dock__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__dock__request

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Dock_Request(metaclass=Metaclass_Dock_Request):
    """Message class 'Dock_Request'."""

    __slots__ = [
        '_frame_id',
        '_poses',
        '_stop_topic',
        '_stop_message_field',
        '_stop_compare_value',
        '_dist_threshold',
    ]

    _fields_and_field_types = {
        'frame_id': 'string',
        'poses': 'sequence<geometry_msgs/Pose>',
        'stop_topic': 'string',
        'stop_message_field': 'string',
        'stop_compare_value': 'boolean',
        'dist_threshold': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.frame_id = kwargs.get('frame_id', str())
        self.poses = kwargs.get('poses', [])
        self.stop_topic = kwargs.get('stop_topic', str())
        self.stop_message_field = kwargs.get('stop_message_field', str())
        self.stop_compare_value = kwargs.get('stop_compare_value', bool())
        self.dist_threshold = kwargs.get('dist_threshold', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.frame_id != other.frame_id:
            return False
        if self.poses != other.poses:
            return False
        if self.stop_topic != other.stop_topic:
            return False
        if self.stop_message_field != other.stop_message_field:
            return False
        if self.stop_compare_value != other.stop_compare_value:
            return False
        if self.dist_threshold != other.dist_threshold:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def frame_id(self):
        """Message field 'frame_id'."""
        return self._frame_id

    @frame_id.setter
    def frame_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'frame_id' field must be of type 'str'"
        self._frame_id = value

    @builtins.property
    def poses(self):
        """Message field 'poses'."""
        return self._poses

    @poses.setter
    def poses(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Pose) for v in value) and
                 True), \
                "The 'poses' field must be a set or sequence and each value of type 'Pose'"
        self._poses = value

    @builtins.property
    def stop_topic(self):
        """Message field 'stop_topic'."""
        return self._stop_topic

    @stop_topic.setter
    def stop_topic(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'stop_topic' field must be of type 'str'"
        self._stop_topic = value

    @builtins.property
    def stop_message_field(self):
        """Message field 'stop_message_field'."""
        return self._stop_message_field

    @stop_message_field.setter
    def stop_message_field(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'stop_message_field' field must be of type 'str'"
        self._stop_message_field = value

    @builtins.property
    def stop_compare_value(self):
        """Message field 'stop_compare_value'."""
        return self._stop_compare_value

    @stop_compare_value.setter
    def stop_compare_value(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'stop_compare_value' field must be of type 'bool'"
        self._stop_compare_value = value

    @builtins.property
    def dist_threshold(self):
        """Message field 'dist_threshold'."""
        return self._dist_threshold

    @dist_threshold.setter
    def dist_threshold(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dist_threshold' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dist_threshold' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dist_threshold = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Dock_Response(type):
    """Metaclass of message 'Dock_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cob_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cob_srvs.srv.Dock_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__dock__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__dock__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__dock__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__dock__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__dock__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Dock_Response(metaclass=Metaclass_Dock_Response):
    """Message class 'Dock_Response'."""

    __slots__ = [
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_Dock(type):
    """Metaclass of service 'Dock'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cob_srvs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cob_srvs.srv.Dock')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__dock

            from cob_srvs.srv import _dock
            if _dock.Metaclass_Dock_Request._TYPE_SUPPORT is None:
                _dock.Metaclass_Dock_Request.__import_type_support__()
            if _dock.Metaclass_Dock_Response._TYPE_SUPPORT is None:
                _dock.Metaclass_Dock_Response.__import_type_support__()


class Dock(metaclass=Metaclass_Dock):
    from cob_srvs.srv._dock import Dock_Request as Request
    from cob_srvs.srv._dock import Dock_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
