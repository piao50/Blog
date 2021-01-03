from django.db import models
from django.contrib import admin

# Create your models here.

# admin.site.register(Author)

class Person(models.Model):
    name = models.CharField(max_length=50)
    birthday = models.DateField()

    def __str__(self):
        return self.name
