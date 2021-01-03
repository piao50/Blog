from django.shortcuts import render, HttpResponse
from main import models

# Create your views here.
def index(request):
    models.Person.objects.all()

    cnt = models.Person.objects.count()
    print('....')
    if cnt > 0:
        name = models.Person.objects.all()[0].name
    return HttpResponse('hello, gushi!' + ' ' + str(cnt) + ' ' + name )

def index2(request):
    context = {}
    context['hello'] = 'hello, gushi!'
    context['hello'] = 'Activity is the only road to knowedge. Ceorge Bernard shaw, British dramalist .'
    import datetime
    now =  datetime.datetime.now()
    context['time'] = now
    return render(request, 'index.html', context)
