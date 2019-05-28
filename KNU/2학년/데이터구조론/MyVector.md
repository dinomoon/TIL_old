```c++
/* ------------- 여기서 부터 과제입니다. (과제시작) ------------- */

	/* 배열의 맨 앞쪽에 객체 x를 추가하시오. */
	void push_front(const Object & x)
	{
		/* 적당한 코드를 추가하시오. */
		//insert(objects.begin(), x);
		if (theSize == theCapacity)
			reserve(theSize * 2);

		for (int i = theSize; i > 0; i--)
			objects[i] = objects[i - 1];

		objects[0] = x;


		theSize++;
	}

	/* 배열의 맨 앞쪽에 객체 x를 추가하시오. 주의: x는 rvalue reference 이다. */
	void push_front(Object && x)
	{
		/* 적당한 코드를 추가하시오. */
		//insert(objects.begin(), std::move(x));
		if (theSize == theCapacity)
			reserve(theSize * 2);
		
		for (int i = theSize; i > 0; i--)
			objects[i] = std::move(objects[i - 1]);

		objects[0] = x;

		theSize++;
	}

	/* 배열의 첫번째 객체(objects[0])를 제거하시오. */
	void pop_front()
	{
		/* 적당한 코드를 추가하시오. */
		for (int i = 0; i < theSize - 1; ++i)
			objects[i] = objects[i + 1];

		theSize--;
	}

	const Object & front() const
	{
		/* 적당한 코드를 추가하시오. */

		if (empty())
			throw UnderflowException{ };
		return objects[0];
	}
	

	// Insert x before itr. 
	// return 값은 추가된 객체를 가리키는 iterator를 리턴한다. 
	iterator insert(iterator itr, const Object & x)
	{
		/* 적당한 코드를 추가하시오. */
		iterator i;
		
		if (theSize == theCapacity)
			reserve(theSize * 2);

		for (i = end(); i > itr; --i)
			*i = *(i - 1);
			
		*itr = x;
		theSize++;
		
		return itr;
	}


	// Insert x before itr. 주의: x는 rvalue reference 이다.
	// return 값은 추가된 객체를 가리키는 iterator를 리턴한다.
	iterator insert(iterator itr, Object && x)
	{
		/* 적당한 코드를 추가하시오. */
		iterator i;

		if (theSize == theCapacity)
			reserve(theSize * 2);

		for (i = end(); i > itr; --i)
			*i = std::move(*(i - 1));

		*itr = x;
		theSize++;

		return itr;
	}

	// Erase item at itr. 
	// return 값은 삭제된 객체의 다음 객체를 가리키는 iterator를 리턴한다. */
	iterator erase(iterator itr)
	{
		/* 적당한 코드를 추가하시오. */
		iterator i;
		if (itr == end() - 1)
		{
			theSize--;
			return itr;
		}
			
		for (i = itr; i < end(); ++i)
			*i = *(i + 1);
		theSize--;

		return itr;
	}

	// 두 개의 벡터가 같은 내용을 가지고 있는지 확인한다. 
	// 객체들의 순서가 다르면, 다른 것으로 판단한다. (예: [1]-[3]-[7] !=  [7]-[3]-[1])
	bool operator== (const MyVector & rhs) const
	{
		/* 적당한 코드를 추가하시오. */
		//bool dummy = false;
		//return dummy;
		if (theSize != rhs.theSize)
			return false;

		for (int i = 0; i < theSize; i++)
			if (objects[i] != rhs.objects[i])
				return false;
		return true;
	}
```
