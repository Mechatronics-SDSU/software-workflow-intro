# generated from rosidl_generator_py/resource/_idl.py.em
# with input from package2:srv/ConvertTime.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ConvertTime_Request(type):
    """Metaclass of message 'ConvertTime_Request'."""

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
            module = import_type_support('package2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'package2.srv.ConvertTime_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__convert_time__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__convert_time__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__convert_time__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__convert_time__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__convert_time__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ConvertTime_Request(metaclass=Metaclass_ConvertTime_Request):
    """Message class 'ConvertTime_Request'."""

    __slots__ = [
        '_unixtime',
    ]

    _fields_and_field_types = {
        'unixtime': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.unixtime = kwargs.get('unixtime', int())

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
        if self.unixtime != other.unixtime:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def unixtime(self):
        """Message field 'unixtime'."""
        return self._unixtime

    @unixtime.setter
    def unixtime(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'unixtime' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'unixtime' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._unixtime = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ConvertTime_Response(type):
    """Metaclass of message 'ConvertTime_Response'."""

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
            module = import_type_support('package2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'package2.srv.ConvertTime_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__convert_time__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__convert_time__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__convert_time__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__convert_time__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__convert_time__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ConvertTime_Response(metaclass=Metaclass_ConvertTime_Response):
    """Message class 'ConvertTime_Response'."""

    __slots__ = [
        '_humantime',
    ]

    _fields_and_field_types = {
        'humantime': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.humantime = kwargs.get('humantime', int())

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
        if self.humantime != other.humantime:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def humantime(self):
        """Message field 'humantime'."""
        return self._humantime

    @humantime.setter
    def humantime(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'humantime' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'humantime' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._humantime = value


class Metaclass_ConvertTime(type):
    """Metaclass of service 'ConvertTime'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('package2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'package2.srv.ConvertTime')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__convert_time

            from package2.srv import _convert_time
            if _convert_time.Metaclass_ConvertTime_Request._TYPE_SUPPORT is None:
                _convert_time.Metaclass_ConvertTime_Request.__import_type_support__()
            if _convert_time.Metaclass_ConvertTime_Response._TYPE_SUPPORT is None:
                _convert_time.Metaclass_ConvertTime_Response.__import_type_support__()


class ConvertTime(metaclass=Metaclass_ConvertTime):
    from package2.srv._convert_time import ConvertTime_Request as Request
    from package2.srv._convert_time import ConvertTime_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
