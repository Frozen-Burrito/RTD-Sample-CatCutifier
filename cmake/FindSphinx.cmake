# Look for the sphinx-build executable
find_program (SPHINX_EXECUTABLE
			  NAMES sphinx-build
			  DOC "Path to the sphinx-build executable")

include (FindPackageHandleStandardArgs)

find_package_handle_standard_args(Sphinx
								  "Failed to find the sphinx-build executable"
								  SPHINX_EXECUTABLE)