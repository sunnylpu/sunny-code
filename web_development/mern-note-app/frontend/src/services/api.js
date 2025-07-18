// frontend/src/services/api.js
import axios from 'axios';

const API = axios.create({
    baseURL: 'http://localhost:5001/api', // Your backend API base URL
});

// Interceptor to add JWT token to requests
API.interceptors.request.use(
    (config) => {
        const token = localStorage.getItem('token');
        if (token) {
            config.headers.Authorization = `Bearer ${token}`;
        }
        return config;
    },
    (error) => {
        return Promise.reject(error);
    }
);

export default API;