.. CuteCat Library documentation master file, created by
   sphinx-quickstart on Fri Jan 21 21:26:17 2022.

How-to Guides
=============

A list of fully practical examples is provided within this document. All the examples have the 
purpose of helping you learn about a specific part of the CuteCat library API.

Petting a Cat
-------------

Increasing Cuteness
-------------------

.. warning::

	Be careful when increasing the cuteness level of a cat. Cuteness levels greater than *configMAX_CUTENESS*
	may result in **undefined universal** behaviour. Only recommended for experienced users.

To increase the cuteness of a cat, you should use the ``Cat::increase_cuteness()`` function,
passing a positive integer ``addedCuteness`` as the amount of cuteness that should be added to the Cat's current
cuteness level.

.. code-block:: c++

	cat.increase_cuteness(5);

The previous example increases the cat's cuteness level by 5. If the previous cuteness level was 14, the increased
cuteness level after this function call will be 19.