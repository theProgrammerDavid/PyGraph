from weakref import ref

class EventManager(object):
	def __init__(self):
		self.listeners = dict()

	def add_listener(self,event,listener):
		'''
		Register a listener for event updates

		Note:
		event is the event CLASS.
		'''
		if event in self.listeners:
			self.listeners[event].append(ref(listener))
		else:
			self.listeners[event] = [ref(listener)]
	
	def update(self, event):
		'''
		Update all event listeners about the current event

		Note:
		event is the event OBJECT.
		'''
		for listener in self.listeners[event.__class__]:
			listener().update(event)
