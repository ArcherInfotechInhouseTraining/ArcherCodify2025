package com.example.helper;

import org.hibernate.SessionFactory;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.Transaction;
import org.hibernate.cfg.Configuration;

public class FactoryProvider {

    public  static SessionFactory factory;

    public static SessionFactory getFactory() {
        if (factory == null) {
            try {
                factory = new Configuration().configure("hibernate_cfg.xml").buildSessionFactory();
            } catch (Exception e) {
                e.printStackTrace();
                throw new RuntimeException("There was a problem building the factory");
            }
        }
        return factory;
    }

    public void closeFactory(){
        if (factory.isOpen()){
            factory.close();
        }
    }


}
