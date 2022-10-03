"""
Tests hello.py.
"""
from app.hello import dummy


def test_dummy():
    """Tests dummy."""
    assert dummy() == "Hello World!"
