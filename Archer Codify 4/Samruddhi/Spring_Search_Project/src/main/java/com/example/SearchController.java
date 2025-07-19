package com.example;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.servlet.view.RedirectView;

@Controller
public class SearchController {

    public SearchController() {
        System.out.println("🔍 SearchController initialized");
    }

    @RequestMapping("/home")
    public String home() {
        System.out.println("➡️ /home mapping hit");
        return "home";
    }

   @RequestMapping("/search")
    public RedirectView search(@RequestParam("querybox")String query){

        String url= "https://www.google.com/search?q="+query;

        RedirectView redirectView = new RedirectView();

        redirectView.setUrl(url);

        return redirectView;
    }

/*
    @RequestMapping("/search")
    public RedirectView search(@RequestParam("querybox") String query) {

        RedirectView redirectView = new RedirectView();

        if (query == null || query.trim().isEmpty()) {
            redirectView.setUrl("/home");
        } else {
            String url = "https://www.google.com/search?q=" + query;
            redirectView.setUrl(url);
        }

        return redirectView;
    }*/

}
