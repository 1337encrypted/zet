# REST API

- REST stands for Representational State Transfer

## End point - http.HandleFunc

- Uniform interface: All API request for the same resource should look the same, no matter where the request comes from.


```
GET /v1/users/feed
```

- GET: Http method
- v1: API version
- users: Resource
- feed: Action/Resource

## CRUD operations

| CRUD operations | HTTP methods |
| :--- | :--- |
| Create | POST |
| Read | GET |
| Update | PATCH/PUT |
| Delete | DELETE |

## Statelessness

- Request 
```
PATCH /v1/users/posts/42

BODY    {"title":"New title"}
HEADERS:Authorization
```

- Response
```
CODE:   200
PAYLOAD:{"title":"New title"}
HEADERS:...
```
```
