// Import the functions you need from the SDKs you need
import { initializeApp } from "firebase/app";
import { getAnalytics } from "firebase/analytics";
import { getFirestore } from "firebase/firestore";
import { getStorage } from "firebase/storage";
// TODO: Add SDKs for Firebase products that you want to use
// https://firebase.google.com/docs/web/setup#available-libraries

// Your web app's Firebase configuration
// For Firebase JS SDK v7.20.0 and later, measurementId is optional
const firebaseConfig = {
  apiKey: "AIzaSyAkhUbE7rXVdMJ_LGQxG9ZafHCuDPYMcE0",
  authDomain: "business-directory-bis.firebaseapp.com",
  projectId: "business-directory-bis",
  storageBucket: "business-directory-bis.appspot.com",
  messagingSenderId: "1002366033678",
  appId: "1:1002366033678:web:459d87894addc93ece015f",
  measurementId: "G-YCCVM3RXNW",
};

// Initialize Firebase
export const app = initializeApp(firebaseConfig);
export const db = getFirestore(app);
export const storage = getStorage(app);

// const analytics = getAnalytics(app);
