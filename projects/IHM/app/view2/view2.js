'use strict';

angular.module('myApp.view2', ['ngRoute'])

.config(['$routeProvider', function($routeProvider) {
  $routeProvider.when('/view2', {
    templateUrl: 'view2/view2.html',
    controller: 'View2Ctrl'
  });
}])

.controller('View2Ctrl', [function() {
    // definiting the base constructor for all classes, which will execute the final class prototype's initialize method if exists
    var Class = function () {
        this.initialize && this.initialize.apply(this, arguments);
    };
    Class.extend = function (childPrototype) { // defining a static method 'extend'
        var parent = this;
        var child = function () { // the child constructor is a call to its parent's
            return parent.apply(this, arguments);
        };
        child.extend = parent.extend; // adding the extend method to the child class
        var Surrogate = function () {
        }; // surrogate "trick" as seen previously
        Surrogate.prototype = parent.prototype;
        child.prototype = new Surrogate;
        for (var key in childPrototype) {
            child.prototype[key] = childPrototype[key];
        }
        return child; // returning the child class
    };

    var Dog = Class.extend({
        initialize: function () { // initialize is called by constructor at instanciation.
            this.numberOfLegs = 4;
            console.log("A dog is constructed");
        },
        bark: function () {
            console.log("wouf wouf");
        }
    });

    var Doberman = Dog.extend({
        growl: function () {
            console.log("aouwww");
        }
    });

    var rufus = new Doberman();
    var beeby = new Dog();
// now play with it !
}]);