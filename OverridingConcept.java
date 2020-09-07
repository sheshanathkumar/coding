package com.sk;

class Parent {
	
	public void getValue () {
		System.out.println("In Parent");
	}
	
}

class Child extends Parent {
	
	public void getValue () {
		System.out.println("In Child");
	}
	
}

public class OverridingConcept {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Parent p = new Child();
		p.getValue();
	}

}
